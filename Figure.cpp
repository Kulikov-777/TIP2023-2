#include "figure.h"

figure::figure(float x1, float x2, float x3, float x4, float y1, float y2,
               float y3, float y4) {
  float AB, BC, CD, AD;
  this->x1 = x1;
  this->x2 = x2;
  this->x3 = x3;
  this->x4 = x4;
  this->y1 = y1;
  this->y2 = y2;
  this->y3 = y3;
  this->y4 = y4;
  AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
  CD = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
  AD = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
  P = AB + BC + CD + AD;
  S = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - y1 * x2 - y2 * x3 -
                y3 * x4 - y4 * x1);
}

void figure::show() {
  cout << x1 << " " << y1 << endl << " " << x2 << " " << y2 << endl;
  cout << x3 << " " << y3 << endl << " " << x4 << " " << y4 << endl;
  cout << P << " " << S << endl << endl;
}

bool figure::is_prug() {
  float AC, BD;
  AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
  BD = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
  return AC == BD;
}

bool figure::is_romb() {
  float AB, BC, CD, AD;
  AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
  CD = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
  AD = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
  return (AB == BC && AB == CD && AB == AD);
}

bool figure::is_square() { return this->is_prug() && this->is_romb(); }

bool figure::is_in_circle() {
  float ACBD, ABCD, ADBC;
  ACBD = sqrt((pow(x1 - x3, 2) + pow(y1 - y3, 2)) *
              (pow(x4 - x2, 2) + pow(y4 - y2, 2)));
  ABCD = sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)) *
              (pow(x3 - x4, 2) + pow(y3 - y4, 2)));
  ADBC = sqrt((pow(x4 - x1, 2) + pow(y4 - y1, 2)) *
              (pow(x2 - x3, 2) + pow(y2 - y3, 2)));
  return ((ACBD) == (ABCD + ADBC));
}

bool figure::is_out_circle() {
  float AB, BC, CD, AD;
  AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
  CD = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
  AD = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
  return ((AB + CD) == (BC + AD));
}