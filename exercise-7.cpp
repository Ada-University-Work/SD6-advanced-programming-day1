/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-7#main.cpp
Exercise:
Prompt the user to enter numerical values or q to quit, the programe should count the number of positive, negative and 0 numbers given. This should be displayed once the user has quit.
*/
#include <iostream>
using namespace std;

bool is_number(string str) { // checks if input is a number or decimal number and returns true if it is
  if (isdigit(str[0]) == false && str[0] != '-') //allows for minus numbers
      return false;
  for (int i = 1; i < str.length(); i++)
    if (isdigit(str[i]) == false)
      return false;
  return true;
}

int main() {
  bool exit;
  int num;
  int zeros = 0;
  int positives = 0;
  int negatives = 0;
  string input;

  cout << "Please enter a valid numeric, or “Q” to finish:\n";

  while ( exit == false ) {
    cin >> input;
    if (input == "Q" || input == "q"){
      exit = true;
    }
    else if (is_number(input) == false) {
      cout << "Invalid value, please try again:\n";
    }
    else {
      int num = stoi(input);
      if(num > 0){
        positives++;
      }
      else if(num < 0){
        negatives++;
      }
      else {
        zeros++;
      }
    }
  }
  cout << "\nTotal number of values entered: " << zeros + negatives + positives;
  cout << "\nZeros:\t\t" << zeros << "\nPositives:\t" << positives << "\nNegatives:\t" << negatives;
}
