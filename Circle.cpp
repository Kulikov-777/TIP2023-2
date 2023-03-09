#define _USE_MATH_DEFINES

#include "circle.h"

#include <cmath>

circle::circle(float r, float x, float y) {
  radius = r;
  x_center = x;
  y_center = y;
}

void circle::set_circle(float r, float x, float y) {
  radius = r;
  x_center = x;
  y_center = y;
}

float circle::square() {
  float S = pow(radius, 2) * M_PI;
  return S;
}

bool circle::triangle_around(float a, float b, float c) {
  double p = (a + b + c) / 2;
  return (radius == sqrt(p * (p - a) * (p - b) * (p - c)) / (a + b + c));
}

bool circle::triangle_in(float a, float b, float c) {
  double p = (a + b + c) / 2;
  return (radius == (a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))));
}

bool circle::check_circle(float r, float x_cntr, float y_cntr) {
  return ((radius + r) >
          (sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2))));
}