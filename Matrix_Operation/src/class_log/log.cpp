#include "log.h"
#include <string>


//Constructor
log::log(){
	bool aStatus[3] = { false, false, false};
}

//Deconstructor
log::~log(){
}

//****************************************************************************************
//Functions for checking the status
//****************************************************************************************

//----------------------------------------------------------------------------------------
//This function tell you if ther is a error,warnig or note in some function class...
//----------------------------------------------------------------------------------------
bool log::getStatus(int level){
	return aStatus[level];
}

//----------------------------------------------------------------------------------------
//This function tell you if ther is a error,warnig or note in some function class...
//----------------------------------------------------------------------------------------
void log::setStatus(int level, bool status) {
	aStatus[level] = status;
}

//****************************************************************************************
//Functions for checking the status
//****************************************************************************************

//----------------------------------------------------------------------------------------
//This function tell you if ther is a error,warnig or note in some function class...
//----------------------------------------------------------------------------------------

