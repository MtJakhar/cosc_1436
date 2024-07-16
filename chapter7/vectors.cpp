#include <iostream>
#include <vector>
#include <random>

using namespace std;

random_device randEngine;

uniform_int_distribution<int> randomNumber(1,10);

int main () {
  vector<int> numbers {10,20,30,40,50};

  for(int val : numbers) {
    cout << val << endl;
  }

  numbers.push_back(randomNumber(randEngine));
  // numbers.pop_back();
  cout<< "New list with rand numbers" << endl;
  for(int val : numbers) {
    cout << val << endl;
  }

  return 0;
}