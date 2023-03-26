#include "gulf.h"

#include <Windows.h>

void Gulf::setName(string N) { name = N; }
void Gulf::setDeep(float D) { deep = D; }
void Gulf::setSize(float S) { size = S; }

ostream& operator<<(ostream& out, Gulf obj) {
  out << obj.name << " залив; ";
  out << "глубина: " << obj.deep << "м; ";
  out << "размер: " << obj.size << "тыс км2";

  return out;
}
istream& operator>>(istream& stream, Gulf& obj) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Rus");
  stream >> obj.name >> obj.deep >> obj.size;
  return stream;
}