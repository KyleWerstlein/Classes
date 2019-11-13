#pragma once
#include "media.h"
#include <iostream>
#include <vector>

using namespace std;

class Music {
public:
	int getDuration();
	void setDuration(int newDuration);
	vector<char> getArtist();
	void setArtist(vector<char> newArtist);
	vector<char> getPublisher();
	void setPublisher(vector<char> newPublisher);
private:
	int duration;
	vector<char> publisher;
	vector<char> artist;
};