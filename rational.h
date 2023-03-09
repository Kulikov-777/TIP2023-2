#pragma once
#include <iostream>

using namespace std;

class rational {
 private:
  int a, b;
  int gcd(int a, int b);

 public:
  rational();
  rational(int a1, int b1);
  void set(int a1, int b1);
  void show();
};
