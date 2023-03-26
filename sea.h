#include <iostream>
#include <string>

#include "gulf.h"

using namespace std;

class Sea : private Gulf {
 private:
  string name;
  float deep;
  float size;

  int Gulfs_count = 0;

  string NamesSea[3] = {"11a", "22b", "33c"};

 public:
  Gulf* Gulfs = new Gulf[Gulfs_count];

  Sea() {
    name = NamesSea[rand() % 3];
    deep = rand() % 8500 + 3500;
    size = (rand() % 100000 + 20000) / 10.0;
  }
  Sea(string N, float D, float S) {
    name = N;
    deep = D;
    size = S;
  }

  void addGulf();

  void setName(string N);
  void setDeep(float D);
  void setSize(float S);

  friend ostream& operator<<(ostream& stream, const Sea obj);
  friend istream& operator>>(istream& stream, Sea& obj);
};