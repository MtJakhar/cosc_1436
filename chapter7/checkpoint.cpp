//Muizz Jakhar Jul 10 2024

#include <iostream>

using namespace std;

int main () {
  int array [5];

  for(int i = 0; i < 5; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

  for(int element : array) {
    cout << "\nNumber: " << element << endl;
    if(element < 0) {
      cout << "Negative" << endl;
    } else if (element > 0) {
      cout << "Positive" << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}