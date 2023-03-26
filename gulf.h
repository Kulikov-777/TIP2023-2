#include <iostream>
#include <string>

using namespace std;

class Gulf {
 private:
  string name;
  float deep;
  float size;

  string NamesGulf[3] = {"1a", "2b", "3c"};

 public:
  Gulf() {
    name = NamesGulf[rand() % 3];
    deep = rand() % 8500 + 3500;
    size = (rand() % 10000 + 2000) / 10.0;
  }
  Gulf(string N, float D, float S) {
    name = N;
    deep = D;
    size = S;
  }

  void setName(string N);
  void setDeep(float D);
  void setSize(float S);

  friend ostream& operator<<(ostream& stream, const Gulf obj);
  friend istream& operator>>(istream& stream, Gulf& obj);
};