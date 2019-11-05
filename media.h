#include <iostream>
#include <vector>

using namespace std;

class Media {
 public:
  vector<char> getTitle();
  void setTitle(vector<char> newtitle);
  int getYear();
  void setYear(int newyear);
  int getType();
  void setType(int newtype);
 private:
  int mediaType;
  int year;
  vector<char> title;
};
