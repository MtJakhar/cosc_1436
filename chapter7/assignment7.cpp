//Muizz Jakhar July 10 2024

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
  int arraySize;

  do{
    cout << "How many students would you like to enter: ";
    cin >> arraySize;
  } while (arraySize < 0);

  string students [arraySize];
  int creditHours [arraySize];
  double total = 0.0;
  double average;
  int highestCreditStudent = 0;
  int lowestCreditStudent = 0;

  for(int i = 0; i < arraySize; i++) {
    cout << "Enter name of student " << i + 1 << ": ";
    cin >> students[i];
  };

  for(int i = 0; i < arraySize; i++) {
    do {
      cout << "Enter the number of credit hours for " << students[i] << ": ";
      cin >> creditHours[i];
    } while(creditHours[i] < 0);

    if(creditHours[i] > creditHours[highestCreditStudent]) {
      highestCreditStudent = i;
    }
    if(creditHours[i] < creditHours[lowestCreditStudent]) {
      lowestCreditStudent = i;
    }
    total += creditHours[i];
  }

  average = total / arraySize; 

  cout << "\n------------------------------\n"; 
  cout << "\nTotal Credit Hours: " << total << endl; 
  cout << "Average Credit Hours: " << average << endl;
  cout << "Student with Highest Credit Hours: " << students[highestCreditStudent] << endl;
  cout << "Student with Lowest Credit Hours: " << students[lowestCreditStudent] << endl;

  return 0;
}
