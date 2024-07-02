#include <iostream>
//fstream allows input output to a file
//ifstream allows input only, while 0fstream allows only output
#include <fstream>
#include <string>

using namespace std;

int main () {

  //define file stream objects
  ifstream inputFile;
  ofstream outputFile;

  string filename;
  int number;

  //get file name from user
  cout << "enter file name" << endl;
  cin >> filename;

  inputFile.open(filename);

  //if file successfully open process it
  if(inputFile) {
    //read number from file and display them
    while (inputFile >> number) {
      cout << number << endl;
    }
    //close the file
    inputFile.close();
  } else {
    //display error
    cout << "Error opening the file.\n";
  }

  return 0;
}