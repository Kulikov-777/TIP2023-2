#include "sea.h"

#include <Windows.h>

void Sea::addGulf() {
  Gulf* subarray = new Gulf[Gulfs_count + 1];
  for (int i = 0; i < Gulfs_count; i++) {
    subarray[i] = Gulfs[i];
  }
  Gulfs_count++;
  Gulfs = subarray;
}

void Sea::setName(string N) { name = N; }
void Sea::setDeep(float D) { deep = D; }
void Sea::setSize(float S) { size = S; }

ostream& operator<<(ostream& stream, Sea obj) {
  stream << obj.name << " море; ";
  stream << "глубина: " << obj.deep << "м; ";
  stream << "размер: " << obj.size << "тыс км2";

  if (obj.Gulfs_count == 0) stream << "\n    у этого моря нет заливов.";

  for (int i = 0; i < obj.Gulfs_count; i++) {
    stream << "\n    " << obj.Gulfs[i];
  }

  return stream;
}
istream& operator>>(istream& stream, Sea& obj) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Rus");
  stream >> obj.name >> obj.deep >> obj.size;
  return stream;
}