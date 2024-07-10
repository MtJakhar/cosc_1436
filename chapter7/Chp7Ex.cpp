//Rainfall Statistics
//Muizz Jakhar Jul10/2024

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_MONTHS = 12;

int main () {
  double rainFall[NUM_MONTHS];

  for (int month = 0; month < NUM_MONTHS; month++){
    cout << "Enter rainfall (in inches) for month #" << (month +1) << ": ";
    cin >> rainFall[month];

    while (rainFall[month] < 0){
      cout << "Rainfall must be 0 or more. PLease re-enter: ";
      cin >> rainFall[month];
    }
  }

  double total = 0.0;
  double largest = rainFall[0];
  int largestElement = 0;
  double smallest = rainFall[0];
  int smallestElement = 0;

  for (int count = 0; count < NUM_MONTHS; count++) {
    total += rainFall[count];
    if(rainFall[count] > largest) {
      largest = rainFall[count];
      largestElement = count;
    }
    if(rainFall[count]< smallest) {
      smallest = rainFall[count];
      smallestElement = count;
    }

  }
  cout << fixed << showpoint << setprecision(2) << endl;
  cout << "Total rainfall: " << total << " inches." << endl;

  double average = total / NUM_MONTHS;

  cout << "Average rainfall: " << average << " inches." << endl;
  cout << "Highest month of rainfall: " << (largestElement + 1) << endl;
  cout << "Lowest amount of rainfall: " << (smallestElement + 1) << endl;

  return 0;
}

