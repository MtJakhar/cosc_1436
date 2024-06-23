/*
Muizz Jakhar
June 23 2024
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double miles, meters, kilometers;

  cout << "Enter miles: ";
  cin >> miles;

  kilometers = miles * 1.609344;

  meters = kilometers * 1000;
  
  cout << "Miles: " << setprecision(2) << fixed << miles << endl;
  cout << "Kilometers: " << setprecision(2) << fixed << kilometers << endl;
  cout << "Meters: " << setprecision(2) << fixed << meters << endl;

  return 0;
}

