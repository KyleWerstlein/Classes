// Kyle Werstlein
// 11/12/19
// Classes
#include <iostream>
#include "media.h"
#include "games.h"
#include "movies.h"
#include "music.h"
#include <cstring>
using namespace std;

int main() {
	bool isRunning = 1;
	char input[6];
	vector<Games*> games;
	int gameCount = 0;
	while (isRunning) {
		cout << "Would you like to ADD, SEARCH, or DELETE?" << endl;
		cin.getline(input, 7, '\n'); // take input
		if (strcmp(input, "ADD") == 0) {
			cout << "What type of media would you like to add?" << endl;
			cout << "GAME" << endl << "MOVIE" << endl << "MUSIC" << endl;
			cin.getline(input, 6, '\n'); // what type of media?
			if(strcmp(input, "GAME") == 0) {
				Games* newgame = new Games();
				Media::setYear
				games.push_back(newgame);
			}
			if (strcmp(input, "MOVIE") == 0) {

			}
			if (strcmp(input, "MUSIC") == 0) {

			}
		}
		else if (strcmp(input, "SEARCH") == 0) {

		}
		else if (strcmp(input, "DELETE") == 0) {

		}
	}
	return 0;
}
