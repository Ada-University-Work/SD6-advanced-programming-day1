/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-4#main.cpp
Exercise:
Check if a number input by the user is odd or even using the modulous operator (%). The extension is to allow a decimal value to be entered.
*/
#include <iostream>
using namespace std;

int main() {
  string num;
  int number;
  cout << "Please enter a value? ";
  cin >> num;

  if ( num.find('.') != string::npos) { //if the number has a decimal point
    string num_after_decimal = num.substr(num.find('.')+1, num.length());
    
    if (stoi(num_after_decimal) != 0) { //if the number after the decimal isn't 0
      cout << "Decimal numbers cannot be considered odd or even";
      return 0;
    }
  }
  number = stoi(num);
  if ( number % 2 == 0)
    cout << number << " is an even number";
  else
    cout << number << " is an odd number";
}
