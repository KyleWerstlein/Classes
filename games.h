#pragma once
#include "media.h"
#include <iostream>
#include <vector>

using namespace std;

class Games{
public:
	char getRating();
	void setRating(char newrating);
	vector<char> getPublisher();
	void setPublisher(vector<char> newPublisher);
private:
	vector<char> publisher;
	char rating;
};