#include "movies.h"

int Movies::getDuration()
{
	return duration;
}

void Movies::setDuration(int newDuration)
{
	duration = newDuration;
}

vector<char> Movies::getDirector()
{
	return director;
}

void Movies::setDirector(vector<char> newDirector)
{
	director.clear();
	for (int i = 0; i < newDirector.size(); i++) {
		director.push_back(newDirector[i]);
	}
}

char Movies::getRating()
{
	return rating;
}

void Movies::setRating(char newrating)
{
	rating = newrating;
}
