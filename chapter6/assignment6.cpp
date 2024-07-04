#include <iostream>
#include <random>

using namespace std;

string switchStates(int rand);

void ifSport(int rand);

random_device randEngine;

uniform_int_distribution<int> randomNumberGenerator(1,5);

int main () {
  int randNumber = randomNumberGenerator(randEngine);
  cout << switchStates(randNumber) << endl; 

  ifSport(randNumber);
  
  return 0;
}

string switchStates(int rand) {
  switch(rand) {
    case 1: return "Florida has gators";
    case 2: return "California has nice beaches";
    case 3: return "Texas has cowboys";
    case 4: return "New Mexico is not Mexico";
    case 5: return "Mississippi is spelled weird";
    default: return "Error";
  }
}

void ifSport(int rand) {
  if(rand == 1) {
    cout << "Basketball is fun to watch" << endl;
  } else if(rand == 2) {
    cout << "Golf is boring" << endl;
  } else if(rand == 3) {
    cout << "Baseball is boring" << endl;
  } else if(rand == 4) {
    cout << "MMA is cool" << endl;
  } else if(rand == 5) {
    cout << "Football is overrated" << endl;
  } else {
    cout << "Error" << endl;
  }
}
