#include <iostream>
using namespace std;

string returnMessage(int);

int main() {
  int number;
  int min = 1, max = 5;
  srand(time(NULL));
  number=(rand()%(max-min+1))+min;
  cout<< number << endl;
  cout<<returnMessage(number)<<endl;
  return 0;
}

string returnMessage(int n1){
  switch(n1){
    case 1: return "Choice 1";
    case 2: return "Choice 2";
    case 3: return "Choice 3";
    case 4: return "Choice 4";
    case 5: return "Choice 5";
    default: return "Default";
  }
}