#include "cone.h"

// реализация Cone

Cone::Cone() { x = y = z = radius = height = 0; }

Cone::Cone(double r, double h) {
  x = y = z = 0.0;
  radius = r;
  height = h;
}

Cone::Cone(double a, double b, double c, double r, double h) {
  x = a;
  y = b;
  z = c;
  radius = r;
  height = h;
}

void Cone::setCoordinate(double a, double b, double c) {
  x = a;
  y = b;
  z = c;
}

void Cone::setRadius(double r) { radius = r; }
void Cone::setHeight(double h) { height = h; }
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }

double Cone::area() {
  double l = sqrt(height * height + radius * radius);
  return pi * radius * (radius + l);
}

double Cone::volume() { return pi * radius * radius * height / 3; }

ostream &operator<<(ostream &stream, Cone obj) {
  stream << "(" << obj.x << "; ";
  stream << obj.y << "; ";
  stream << obj.z << ") ";
  stream << "r=" << obj.radius << " ";
  stream << "h=" << obj.height << "\n";
}

// реализация Frustum

Frustum::Frustum() {
  setCoordinate(0, 0, 0);
  setRadius(0);
  setHeight(0);
  radius2 = 0;
}
Frustum::Frustum(double r1, double r2, double h) {
  setCoordinate(0, 0, 0);
  setRadius(r1);
  setHeight(h);
  radius2 = r2;
}

Frustum::Frustum(double a, double b, double c, double r1, double r2, double h) {
  setCoordinate(a, b, c);
  setRadius(r1);
  setHeight(h);
  radius2 = r2;
}
double Frustum::area() {
  double l =
      sqrt(this->getHeight() * this->getHeight() +
           (this->getRadius() - radius2) * (this->getRadius() - radius2));
  return pi * (this->getRadius() + radius2) * l;
}
double Frustum::volume() {
  return pi * this->getHeight() *
         (this->getRadius() * this->getRadius() + radius2 * radius2 +
          radius2 * this->getRadius()) /
         3;
}

bool Frustum::compare(Frustum cone2) {
  if (this->radius2 == cone2.radius2)
    if (this->getRadius() == cone2.getRadius())
      if (this->getHeight() == cone2.getHeight()) return true;
  return false;
}

ostream &operator<<(ostream &stream, Frustum obj) {
  stream << "r1=" << obj.getRadius() << " ";
  stream << "r2=" << obj.radius2 << " ";
  stream << "h=" << obj.getHeight() << "\n";
}