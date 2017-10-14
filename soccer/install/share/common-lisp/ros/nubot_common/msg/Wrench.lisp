; Auto-generated. Do not edit!


(cl:in-package nubot_common-msg)


;//! \htmlinclude Wrench.msg.html

(cl:defclass <Wrench> (roslisp-msg-protocol:ros-message)
  ((body_name
    :reader body_name
    :initarg :body_name
    :type cl:string
    :initform "")
   (reference_frame
    :reader reference_frame
    :initarg :reference_frame
    :type cl:string
    :initform "")
   (reference_point
    :reader reference_point
    :initarg :reference_point
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (wrench
    :reader wrench
    :initarg :wrench
    :type geometry_msgs-msg:Wrench
    :initform (cl:make-instance 'geometry_msgs-msg:Wrench))
   (start_time
    :reader start_time
    :initarg :start_time
    :type cl:real
    :initform 0)
   (duration
    :reader duration
    :initarg :duration
    :type cl:real
    :initform 0))
)

(cl:defclass Wrench (<Wrench>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Wrench>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Wrench)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name nubot_common-msg:<Wrench> is deprecated: use nubot_common-msg:Wrench instead.")))

(cl:ensure-generic-function 'body_name-val :lambda-list '(m))
(cl:defmethod body_name-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:body_name-val is deprecated.  Use nubot_common-msg:body_name instead.")
  (body_name m))

(cl:ensure-generic-function 'reference_frame-val :lambda-list '(m))
(cl:defmethod reference_frame-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:reference_frame-val is deprecated.  Use nubot_common-msg:reference_frame instead.")
  (reference_frame m))

(cl:ensure-generic-function 'reference_point-val :lambda-list '(m))
(cl:defmethod reference_point-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:reference_point-val is deprecated.  Use nubot_common-msg:reference_point instead.")
  (reference_point m))

(cl:ensure-generic-function 'wrench-val :lambda-list '(m))
(cl:defmethod wrench-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:wrench-val is deprecated.  Use nubot_common-msg:wrench instead.")
  (wrench m))

(cl:ensure-generic-function 'start_time-val :lambda-list '(m))
(cl:defmethod start_time-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:start_time-val is deprecated.  Use nubot_common-msg:start_time instead.")
  (start_time m))

(cl:ensure-generic-function 'duration-val :lambda-list '(m))
(cl:defmethod duration-val ((m <Wrench>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nubot_common-msg:duration-val is deprecated.  Use nubot_common-msg:duration instead.")
  (duration m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Wrench>) ostream)
  "Serializes a message object of type '<Wrench>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'body_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'body_name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'reference_frame))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'reference_frame))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'reference_point) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'wrench) ostream)
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'start_time)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'start_time) (cl:floor (cl:slot-value msg 'start_time)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'duration)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'duration) (cl:floor (cl:slot-value msg 'duration)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Wrench>) istream)
  "Deserializes a message object of type '<Wrench>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'body_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'body_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reference_frame) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'reference_frame) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'reference_point) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'wrench) istream)
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'start_time) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'duration) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Wrench>)))
  "Returns string type for a message object of type '<Wrench>"
  "nubot_common/Wrench")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Wrench)))
  "Returns string type for a message object of type 'Wrench"
  "nubot_common/Wrench")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Wrench>)))
  "Returns md5sum for a message object of type '<Wrench>"
  "e37e6adf97eba5095baa77dffb71e5bd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Wrench)))
  "Returns md5sum for a message object of type 'Wrench"
  "e37e6adf97eba5095baa77dffb71e5bd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Wrench>)))
  "Returns full string definition for message of type '<Wrench>"
  (cl:format cl:nil "string body_name                          # Gazebo body to apply wrench (linear force and torque)~%                                          # wrench is applied in the gazebo world by default~%                                          # body names are prefixed by model name, e.g. pr2::base_link~%string reference_frame                    # wrench is defined in the reference frame of this entity~%                                          # use inertial frame if left empty~%                                          # frame names are bodies prefixed by model name, e.g. pr2::base_link~%geometry_msgs/Point  reference_point      # wrench is defined at this location in the reference frame~%geometry_msgs/Wrench wrench               # wrench applied to the origin of the body~%time start_time                           # (optional) wrench application start time (seconds)~%                                          # if start_time is not specified, or~%                                          # start_time < current time, start as soon as possible~%duration duration                         # optional duration of wrench application time (seconds)~%                                          # if duration < 0, apply wrench continuously without end~%                                          # if duration = 0, do nothing~%                                          # if duration < step size, apply wrench~%                                          # for one step size~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, separated into~%# its linear and angular parts.~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Wrench)))
  "Returns full string definition for message of type 'Wrench"
  (cl:format cl:nil "string body_name                          # Gazebo body to apply wrench (linear force and torque)~%                                          # wrench is applied in the gazebo world by default~%                                          # body names are prefixed by model name, e.g. pr2::base_link~%string reference_frame                    # wrench is defined in the reference frame of this entity~%                                          # use inertial frame if left empty~%                                          # frame names are bodies prefixed by model name, e.g. pr2::base_link~%geometry_msgs/Point  reference_point      # wrench is defined at this location in the reference frame~%geometry_msgs/Wrench wrench               # wrench applied to the origin of the body~%time start_time                           # (optional) wrench application start time (seconds)~%                                          # if start_time is not specified, or~%                                          # start_time < current time, start as soon as possible~%duration duration                         # optional duration of wrench application time (seconds)~%                                          # if duration < 0, apply wrench continuously without end~%                                          # if duration = 0, do nothing~%                                          # if duration < step size, apply wrench~%                                          # for one step size~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, separated into~%# its linear and angular parts.~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Wrench>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'body_name))
     4 (cl:length (cl:slot-value msg 'reference_frame))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'reference_point))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'wrench))
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Wrench>))
  "Converts a ROS message object to a list"
  (cl:list 'Wrench
    (cl:cons ':body_name (body_name msg))
    (cl:cons ':reference_frame (reference_frame msg))
    (cl:cons ':reference_point (reference_point msg))
    (cl:cons ':wrench (wrench msg))
    (cl:cons ':start_time (start_time msg))
    (cl:cons ':duration (duration msg))
))
