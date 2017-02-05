#include "../headers/headers.h"
#include "naobehaviour.h"

NaoBehaviour::NaoBehaviour(const std::string teamName, int uNum, const map <std::string, std::string>& namedParams_, const std::string& rsg_) :
rsg(rsg_)
{
	
}

NaoBehaviour::~NaoBehaviour() {

}

std::string NaoBehaviour::Init() {
    return "(scene " + rsg + ")";
}

std::string NaoBehaviour::Think(const std::string& message) {
	return "";
}

std::string NaoBehaviour::getMonMessage() {
	return "";
}
