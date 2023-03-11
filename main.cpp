#include "rational2.h"

int main() {
  int size, ind1, ind2;
  cout << "Enter array size: ";
  cin >> size;
  cout << endl;
  rational* arr = new rational[size];
  for (int i = 0; i < size; i++) {
    int temp1, temp2;
    cout << "enter num and denom of " << i + 1 << "th rational\n";
    cin >> temp1 >> temp2;
    arr[i].set(temp1, temp2);

    cout << i + 1 << " rational: \n";
    arr[i].show();

    cout << "enter new num and denom of " << i + 1 << "th rational\n";
    cin >> temp1 >> temp2;

    arr[i].set(temp1, temp2);

    cout << "new rational display: \n";
    arr[i].show();
  }
  cout << "enter the indices (from 1 to " << size
       << "), that u want to sum : \n";
  cin >> ind1 >> ind2;
  cout << "\nresult:\n";
  (arr[ind1 - 1] + arr[ind2 - 1]).show();

  cout << "enter the indices (from 1 to " << size
       << "), that u want to substract : \n";
  cin >> ind1 >> ind2;
  cout << "\nresult:\n";
  (arr[ind1 - 1] - arr[ind2 - 1]).show();

  cout << "enter the indices (from 1 to " << size
       << "), of rationals, numenators of which u want to increment: \n";
  cin >> ind1;
  cout << "\nresult:\n";
  (++arr[ind1 - 1]).show();

  cout << "enter the indices (from 1 to " << size
       << "), of rationals, which u want to compare: \n";
  cin >> ind1 >> ind2;
  if (arr[ind1 - 1] == arr[ind2 - 1]) {
    cout << "rationals are equal\n";
  }
  if (arr[ind1 - 1] > arr[ind2 - 1]) {
    cout << "1st rational is bigger than 2nd\n";
  }
  if (arr[ind1 - 1] < arr[ind2 - 1]) {
    cout << "2nd rational is bigger than 1st\n";
  }

  cout << "1st rational has become 2nd :)\n";
  arr[ind1 - 1] = arr[ind2 - 1];
  for (int i = 0; i < size; i++) arr[i].show();
  cout << endl;
  delete[] arr;
  return 0;
}