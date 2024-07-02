//check point
//Muizz Jakhar june 30

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main () {

  int randomNumber;
  cout << "Enter a number 1-5" << endl;
  cin >> randomNumber;

  if(randomNumber == 1) {
    cout << "There are 7 continents." << endl;
  } else if(randomNumber == 2) {
    cout << "24 hours in a day." << endl;
  } else if(randomNumber == 3) {
    cout << "Humans have 10 fingers." << endl;
  } else if(randomNumber == 4) {
    cout << "Squares have 4 sides." << endl;
  } else if(randomNumber == 5) {
    cout << "Triangles have 3 sides" << endl;
  } else {
    cout << "invalid." << endl;
  }

  return 0;
}
