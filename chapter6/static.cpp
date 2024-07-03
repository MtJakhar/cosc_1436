#include <iostream>

using namespace std;

int increment();

int main () {

  for(int i = 0; i < 5; i++) {
    cout << increment() << endl;
  }

  return 0;
}
int increment() {
  static int num = 0;
  num++;
  return num;
}