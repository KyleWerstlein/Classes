#include <iostream>
#include "media.h"
#include <cstring>
using namespace std;

int main() {
  bool isRunning = 1;
  char input[6];
  while(isRunning) {
    cout << "Would you like to ADD, SEARCH, or DELETE?" << endl;
    cin.getline(input, 7, '\n');
    if(strcmp(input, "ADD") == 0) {
      cout << "What type of media would you like to add?" << endl;
      cout << "GAME" << endl << "MOVIE" << endl << "MUSIC" << endl;
    }
    else if(strcmp(input, "SEARCH") == 0) {
      
    }
    else if(strcmp(input, "DELETE") == 0) {
      
    }
  }
  return 0;
}
