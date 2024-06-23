/*
Miles per gallon
Muizz Jakhar June 23 2024
*/

#include <iostream>
using namespace std;

int main () {
  double gallons, miles, mileage;

  cout << "How many gallons of gas can a car hold? ";
  cin >> gallons;

  cout <<"How many miles can you drive in a full tank? ";
  cin >> miles;

  mileage = miles/gallons;

  cout << "This car gets " << mileage << " miles per gallon.";

  return 0;
}