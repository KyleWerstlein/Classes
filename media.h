#include <iostream>

using namespace std;

class Media {
 public:
  char getTitle;
  int getYear();
  int getType();
  int setType(int newtype);
 private:
  int mediaType;
  int year;
  char title[50];
};
