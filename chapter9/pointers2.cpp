#include <iostream>
#include <iomanip>
#include <random>
#include <vector>

using namespace std;

int main () {
  const int size = 9;
  int set[size] = {5,10,15,20,25,20,35,40};
  int *numPtr = nullptr;
  int count;

  /*
    const pointers
    -pointer that points to a constant
    -pointer that cannot point to anything except what it is pointing to

    int value = 22;
    int * const ptr = &value;
  */

  numPtr = set;

  cout << "The numbers in set are:\n";

  for(count = 0; count < size; count++) {
    cout << *numPtr << " ";
    numPtr++;
  }

  cout << "\nThe numbers in set backwards are:\n";

  for (count = 0; count < size; count++) {
    numPtr--;
    cout << *numPtr << " ";
  }

  return 0;
}

//pointers as function parameters

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

/*
  dynamic memory allocation

  double *doublePointer = nullptr;
  doublePointer = new double;

  releasing dynamic memory

  use delete keyword to free dynamic memory, use only with dynamic memory
  delete ptr;
  delete [] arrayPtr;
*/

// returning pointers from functions
int *getRandomNumbers(int num) {
  int *arr = nullptr; //array to hold numbers

  if(num <= 0) {
    return nullptr;
  } //return a null ptr if num is zero or negative

  arr = new int[num]; //dynamic allocate the array

  srand(time(0));

  for(int count = 0; count < num; count++){
    arr[count] = rand();
  }

  return arr;
}

/*
  smart pointers prevent memory leaks

  #include <memory>

  -unique_ptr
  -shared_ptr
  -weak_ptr

  unique_ptr<int> ptr(new int);
  *ptr = 99;
  cout << *ptr << endl;
  return 0;
  //output 99

*/