#include <iostream>

using namespace std;

int main () {
  const double penny = 0.01;
  const double nickle = 0.05;
  const double dime = 0.10;
  const double quarter = 0.25;
  const double dollar = 1.00;

  int numPennies, numNickles, numDimes, numQuarters;

  double total;

  cout << "Let's play the change counting game.\n" << endl;
  cout << "Enter the number of coins needed to make exactly on dollar\n" << endl;

  cout << "Enter the number of pennies: ";
  cin >> numPennies;
  
  cout << "Enter the number of nickles: ";
  cin >> numNickles;

  cout << "Enter the number of dimes: ";
  cin >> numDimes;

  cout << "Enter the number of quarters: ";
  cin >> numQuarters;

  total = numPennies * penny + numNickles * nickle + numDimes * dime + numQuarters * quarter;

  if (total > dollar) {
    cout << "\nSorry, that's more than one dollar.\n";
  } else if (total < dollar) {
    cout << "\nSorry, that's less than one dollar.\n";
  } else {
    cout << "\nCongratulations! You win!\n";
  }

  return 0;
}