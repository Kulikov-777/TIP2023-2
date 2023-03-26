#pragma once

#include <cmath>
#include <iostream>

const double pi = 3.14159265;

using namespace std;

class Cone {
  double x, y, z;
  double radius;
  double height;

 public:
  Cone();
  Cone(double r, double h);
  Cone(double a, double b, double c, double r, double h);
  void setCoordinate(double a, double b, double c);
  void setRadius(double r);
  void setHeight(double h);
  double getRadius();
  double getHeight();
  double area();
  double volume();

  friend ostream &operator<<(ostream &stream, Cone obj);
};

class Frustum : public Cone::Cone {
 private:
  double radius2;  // верхний радиус. Нижний радиус определяется полем базового
                   // класса

 public:
  Frustum();

  Frustum(double r1, double r2, double h);

  Frustum(double a, double b, double c, double r1, double r2, double h);

  double area();
  double volume();
  bool compare(Frustum cone2);

  friend ostream &operator<<(ostream &stream, Frustum obj);
};