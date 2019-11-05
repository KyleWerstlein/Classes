#include <iostream>
#include "media.h"
#include <vector>

using namespace std;

int Media::getType() {
  return mediaType;
}
void Media::setType(int newtype) {
  mediaType = newtype;
}
vector<char> Media::getTitle() {
  return title;
}
void Media::setTitle(vector<char> newtitle) {
  title.clear();
  for(int i = 0; i < newtitle.size(); i++) {
    title.push_back(newtitle[i]);
  }
}
int Media::getYear() {
  return year;
}
void Media::setYear(int newyear) {
  year = newyear;
}
