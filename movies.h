#pragma once
#include "media.h"
#include <iostream>
#include <vector>

using namespace std;

class Movies {
public:
	int getDuration();
	void setDuration(int newDuration);
	vector<char> getDirector();
	void setDirector(vector<char> newDirector);
	char getRating();
	void setRating(char newrating);
private:
	int duration;
	char rating;
	vector<char> director;
};