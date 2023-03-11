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
  rational operator+(const rational& other);
  friend rational operator-(const rational& other1, const rational& other2);
  rational& operator++();
  rational& operator++(const int);
  bool operator==(const rational& other);
  bool operator>(const rational& other);
  bool operator<(const rational& other);
  void operator=(const rational& other);
};
