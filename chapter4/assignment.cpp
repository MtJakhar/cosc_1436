// Assignment
// Muizz Jakhar June 30 2024

#include <iostream>

using namespace std;

int main()
{

  int age;

  cout << "Enter age: ";
  cin >> age;

  if (age >= 16)
  {
    cout << "You are old enough to drive a car." << endl;
  }
  else
  {
    if (16 - age == 1)
    {
      cout << "You Have 1 year until you are old enough to drive a car." << endl;
    }
    else
    {
      cout << "You Have " << 16 - age << " years until you are old enough to drive a car." << endl;
    }
  }

  if (age >= 18)
  {
    cout << "You are old enough to vote." << endl;
  }
  else
  {
    if (18 - age == 1)
    {
      cout << "You Have 1 year until you are old enough to vote." << endl;
    }
    else
    {
      cout << "You Have " << 18 - age << " years until you are old enough to vote." << endl;
    }
  }

  if (age >= 21)
  {
    cout << "You are old enough to drink alcohol." << endl;
  }
  else
  {
    if (21 - age == 1)
    {
      cout << "You Have 1 year until you are old enough to drink alcohol." << endl;
    }
    else
    {
      cout << "You Have " << 21 - age << " years until you are old enough to drink alcohol." << endl;
    }
  }

  return 0;
}