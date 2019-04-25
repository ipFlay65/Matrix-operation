#pragma once


class log 
{
	bool aStatus[3];
	int levelOfWarnig;
public:
	log();
	~log();

	//Functions for checking the status
	bool getStatus(int);
	void setStatus(int, bool);

	//Function for writing massage

};

