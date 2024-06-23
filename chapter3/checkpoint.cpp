/*
Muizz Jakhar June 23 2024
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  double fahrenheit, celsius;

  cout << "Enter Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (fahrenheit - 32) * 5/9;

  cout << "Fahrenheit: " << setprecision(5) << fahrenheit << endl;
  cout << "Corresponding Celsius: " << setprecision(5) << celsius << endl;

  return 0;
}