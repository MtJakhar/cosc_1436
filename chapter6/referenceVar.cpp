#include <iostream>

using namespace std;

void doubleNum(int &);

int main() {
  int value = 5;
  cout << "before " << value << endl;
  //reference argument must be a variable. it is referencing the memory address of the variable.
   
  doubleNum(value);
  cout << "after " << value << endl;

  return 0;
}

void doubleNum(int &ref) {
  ref *= 2;
}