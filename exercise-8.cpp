/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-8#main.cpp
Exercise:
Ask the user for a numerical input until they enter 'q' to quit. Out put the highest and the lowest values detected without using in-built functions. Extension is to prevent the user from entering the same number multiple times.
*/
#include <iostream>
#include <set>
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
  bool exit, values_set = false;
  int num, lowest, highest;
  string input;
  set<int> num_set;

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
      num = stoi(input);

      if(num_set.find(num) != num_set.end()){
        cout << "Value already entered, please try again:\n";
      }
      else {
        if (values_set == true){
          if (num > highest) {
            highest = num;
          }
          else if (num < lowest) {
            lowest = num;
          }
        }
        else {
          highest = num;
          lowest = num;
          values_set = true;
        }
        num_set.insert(num);
      }
    }
  }
  cout << "\nTotal number of values entered: " << num_set.size();
  cout << "\nLowest Value:\t" << lowest << "\nLargest Value:\t" << highest;
}
