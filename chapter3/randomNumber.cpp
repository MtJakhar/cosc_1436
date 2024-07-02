#include <iostream>
#include <random>

using namespace std;

/*
  to create a random number, you need the following:
  random number engine
  distribution object
*/

int main() {
  // random number engine
  random_device randomNumberEngine;
  //distribution object
  //<int> determines that the datatype is type int
  //randomInt is basically a user created name for the distribution object
  uniform_int_distribution<int> randomInt(1,10); 

  char userInput;
  bool boolVar = true;

  do
  {
    cout << "Do you want rand Num? y or n.\n";

    cin >> userInput;

    if(userInput == 'y') {
      cout << "rand num is : " << randomInt(randomNumberEngine) << endl;
    } else {
      boolVar = false;
    }
  } while (boolVar);

  cout << "no rand, program done" << endl;
  
  return 0;
}