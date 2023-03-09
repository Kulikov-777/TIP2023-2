#pragma once
#include <iostream>
using namespace std;

class Triangle {
 private:
  double a, b, c;

 public:
  bool exist_tr();
  void set(double a1, double b1, double c1);
  void show();
  double perimetr();
  double square();
};