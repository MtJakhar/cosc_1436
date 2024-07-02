#include <iostream>

using namespace std;

int main () {
  int num1;
  int num2;
  
  do {
    cout << "Enter a number between 1-15: ";
    cin >> num1;
  } while (num1 > 15 || num1 < 1 || !num1);
    
  do {
    cout << "Enter a second number between 1-15: ";
    cin >> num2;
  } while (num2 > 15 || num2 < 1 || !num2);

  for(int i = 1; i <= num1 + num2; i++) {
    cout << i << endl;
  }

  if(num1 && num2) {
    cout << "\nthe last print should be " << num1 + num2 << endl;
  }

  return 0;
}