// Muizz Jakhar July 17, 2024
#include <iostream>
#include <random>

using namespace std;

int modifyArray(int [], int, int);

int main () {

//ask user for the array size
int userInput;

do {
  cout << "How many total numbers do you want: ";
  cin >> userInput;
} while (userInput < 1);

int numbers[userInput]; 
int total = 0;

//generate and print the array with random numbers
random_device random_engine;
uniform_int_distribution<int> randomHundred(1,100);
uniform_int_distribution<int> randomTen(1,10);

for(int i = 0; i < userInput; i++) {
  numbers[i] = randomHundred(random_engine);
}

cout << "Original Array: ";

for(int i = 0; i < userInput; i++) {
  cout << numbers[i] << " ";
  total += numbers[i];
}

//calculate and print the total of the array
cout << "\nTotal: " << total << endl;

//generate a random number and call modifyArray function
int newTotal =  modifyArray(numbers, userInput, randomTen(random_engine));

if(newTotal >= total + 50) {
  cout << "You win." << endl;
}

return 0;
}

int modifyArray (int array[], int size, int randNumber) {

  int total = 0;

  cout << "Modified Array: ";
  
  for(int i = 0; i < size; i++) {
    array[i] = array[i] + randNumber;
    total += array[i];
    cout << array[i] << " ";
  }

  cout << "\nNew Total: " << total << endl;

  return total;
}