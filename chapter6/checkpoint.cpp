//Muizz Jakhar Jul 2,2024
#include <iostream>

using namespace std;

bool divisibleBy3(int);

int main () {
  int userEntry;

  for(int i = 0; i < 5; i++) {
    cout << "Enter a number: "; 
    cin >> userEntry;
    if(divisibleBy3(userEntry) == true) {
      cout << "Divisible by 3? true\n" << endl;
    } else {
      cout << "Divisible by 3? false\n" << endl;
    }
  }

  return 0;
}

bool divisibleBy3(int number) {
  if(number % 3 == 0) {
    return true;
  } else {
    return false;
  }
};