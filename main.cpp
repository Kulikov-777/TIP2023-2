#include <iostream>

#include "rational.h"

int main() {
  int size;
  cout << "enter size of an array: ";
  cin >> size;
  cout << endl;
  rational* arr = new rational[size];
  for (int i = 0; i < size; i++) {
    int temp1, temp2;
    cout << "Enter num and denom ";
    cin >> temp1 >> temp2;
    arr[i].set(temp1, temp2);

    cout << i + 1 << " rational: \n";
    arr[i].show();

    cout << "enter new num and demon " << i + 1 << " rational\n";
    cin >> temp1 >> temp2;

    arr[i].set(temp1, temp2);

    cout << "new rational: \n";
    arr[i].show();
  }
  delete[] arr;
  return 0;
}