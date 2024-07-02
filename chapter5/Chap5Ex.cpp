#include <iostream>

using namespace std;

int main () {
  double pay = 0.01;
  double grandTotal = 0.0;
  int maxDays;

  cout << "For how many days will the pay double? ";
  cin >> maxDays;

  cout << maxDays << endl;

  while (maxDays < 1) {
    cout << "The number of days must be at least one.\n";
    cout << "Enter the number of days: ";
    cin >> maxDays;
  }


  cout << "\nDay\t\tTotal pay\n";
  cout << "-------------------------------\n";

  for(int day = 1; day <= maxDays; day++) {
    cout << day << "\t\t$" << pay << endl;

    pay *= 2;

    grandTotal += pay;
  }

  cout << "------------------------------\n";
  cout << "Total" << "\t\t$" << grandTotal << endl;

  return 0;
}