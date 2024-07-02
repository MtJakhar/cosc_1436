#include <iostream>
#include <random>

using namespace std;

int main () {
  int userInput;

  do {
    cout << "Enter a number between 1-20: ";
    cin >> userInput;
  } while (userInput < 1 || userInput > 20);

  random_device randNumEngine;
  uniform_int_distribution<int> randomNumber(1,500);
  
  for(int i = 0; i < userInput; i++) {
    int rand = randomNumber(randNumEngine);
    cout << "Random number: " << rand << endl;
    if(rand % 2 == 0) {
      cout << "Even\n" << endl;
    } else {
      cout << "Odd\n" << endl;
    }
  }

  return 0;
}