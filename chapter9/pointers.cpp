#include <iostream>

using namespace std;

int main () {
  int *integerPointer;
  /*
    these also work
    int * integerPointer;
    int*integerPointer;
  */

  //assign address to pointer
  int *intptr;
  // intptr = &num;

  //nullptr keyword represents the address of zero
  int *ptr = nullptr;

  //pointer variable
  int x = 25;
  int *intptr = &x;
  //intptr would return the memory address of x

  //By using the * dereferencing operator on intptr we can get the value stored in the address which is stored in inptr
  cout << *intptr << endl;
  // in this case it will return 25

  //arrays and pointers
  int vals[] = {4,7,11}, *valptr;

  valptr = vals;

  cout << *valptr; // 4
  cout << *(valptr + 1); // 7
  cout << *(valptr + 2); // 11

  /*
    note the dereference aka indirection operator it can be used on arrays
    *vals -> which returns 4
    equivalent to  
    vals[0]

    *(vals + 1) == vals[1]; // 7
    *(vals + 2) == vals[2]; // 11
  */

  return 0;
}