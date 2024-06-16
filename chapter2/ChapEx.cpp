#include <iostream>
using namespace std;

int main() {
  int inches = 26, feet, remainingInches;
  feet = inches / 12;
  remainingInches = inches % 12;

  cout << "Starting Inches: " << inches << "\nFeet: " << feet << "\nRemaining inches: " << remainingInches << endl;
  return 0;
}