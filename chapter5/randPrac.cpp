#include <iostream>
#include <random>

using namespace std;

int main () {
  random_device randomEngine;
  uniform_int_distribution <int> randomNumber(1,50);
  // int v1 = rand() % 50;  0-49
  // int v2 = rand() % 50 + 1;  1-50
  // int v3 = rand() % 30 + 1985; 1985-2014  

  int rand = randomNumber(randomEngine);

  cout << "rand is " << rand << endl;

  if(rand % 2 == 0) {
    cout << "rand is a even number" << endl;
  } else {
    cout << "rand is a odd number" << endl;
  }

  return 0;
}
