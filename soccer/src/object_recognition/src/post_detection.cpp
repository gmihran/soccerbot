#include <ros/ros.h>
#include <ros/console.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <sensor_msgs/PointCloud2.h>
#include <iostream>
#include <string>
#include <sensor_msgs/PointCloud2.h>
#include <humanoid_league_msgs/LineInformationInImage.h>
#include <vectormath.hpp>

using namespace std;
using namespace ros;
using namespace cv;

ros::NodeHandle* nh;

Publisher line_points_in_image;
Publisher lines_in_image;
image_transport::Subscriber hsv_img;
int image_count = 0;

Scalar lower = Scalar(0, 0, 190);
Scalar upper = Scalar(255, 100, 255);

void detect_post(const sensor_msgs::ImageConstPtr& msg) {
	ROS_INFO("Post Detection");
	cv_bridge::CvImageConstPtr img;
	try {
		img = cv_bridge::toCvShare(msg, "");
	} catch (cv_bridge::Exception& e) {
		ROS_ERROR("cv_bridge exception: %s", e.what());
		return;
	}

	Mat mask;
	Canny(img->image, mask, 1500, 4000, 5);

	Mat final = img->image.clone();

	vector<Vec2f> lines;
	HoughLines(mask, lines, 1, CV_PI / 180, 100, 0, 0, 15*PI/16, 17*PI/16);

	drawLinesOnImg(final, lines, Scalar(0, 255, 0));

	// Save information
	bool image_test;
	nh->getParam("image_test", image_test);
	if (image_test) {
		string fileName = "../../../src/object_recognition/test/net/test"
				+ std::to_string(++image_count) + ".png";
		string fileNameOriginal = "../../../src/object_recognition/test/net/"
				+ std::to_string(image_count) + ".png";
		try {
			imwrite(fileName, final);
			imwrite(fileNameOriginal, mask);
		} catch (runtime_error& ex) {
			ROS_ERROR(ex.what());
		}
	}
}

int main(int argc, char **argv) {

	ros::init(argc, argv, "post_detection");
	ros::NodeHandle n;
	nh = &n;

	image_transport::ImageTransport it(n);
	hsv_img = it.subscribe("/camera_input/image_hsv", 1, &detect_post);
	line_points_in_image = n.advertise<sensor_msgs::PointCloud2>("/object_recognition/line_points_in_image", 1);
	lines_in_image = n.advertise<humanoid_league_msgs::LineInformationInImage>("/object_recognition/lines_in_image", 1);

	ros::spin();
}
