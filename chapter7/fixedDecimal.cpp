#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double number = 3.14159265;

  cout << fixed << setprecision(2) << number << endl;

  cout << fixed << setprecision(3) << number << endl;
  
  return 0;
}