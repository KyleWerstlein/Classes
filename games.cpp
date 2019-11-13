#include "media.h"
#include "games.h"

using namespace std;

char Games::getRating()
{
	return rating;
}

void Games::setRating(char newrating)
{
	rating = newrating;
}

vector<char> Games::getPublisher()
{
	return publisher;
}

void Games::setPublisher(vector<char> newPublisher)
{
	publisher.clear();
	for (int i = 0; i < newPublisher.size(); i++) {
		publisher.push_back(newPublisher[i]);
	}
}
