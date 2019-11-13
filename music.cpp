#include "music.h"

int Music::getDuration()
{
	return duration;
}

void Music::setDuration(int newDuration)
{
	duration = newDuration;
}

vector<char> Music::getArtist()
{
	return artist;
}

void Music::setArtist(vector<char> newArtist)
{
	artist.clear();
	for (int i = 0; i < newArtist.size(); i++) {
		artist.push_back(newArtist[i]);
	}
}

vector<char> Music::getPublisher()
{
	return publisher;
}

void Music::setPublisher(vector<char> newPublisher)
{
	publisher.clear();
	for (int i = 0; i < newPublisher.size(); i++) {
		publisher.push_back(newPublisher[i]);
	}
}
