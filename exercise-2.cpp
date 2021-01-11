/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-2#main.cpp
Exercise:
Write a programme to convert a temperature given by the user into centigrade or farenheit. Add Kelvin as an extension.
*/
#include <iostream>
using namespace std;

int main() {
  double temperature;
  char option;

  cout << "Please enter the starting temperature: ";
  cin >> temperature;

  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade.\nPress ‘F’ to convert from Centigrade to Fahrenheit.\nPress 'K' to convert from Centigrade to Kelvin\n\n";

  cout << "Your choice: ";
  cin >> option;
  option = toupper(option); //this makes the users input uppercase

  string result = (option == 'C') ? // this checks if the user has entered C F or K and then does the corresponding equation
    " degrees Farenheit is " + to_string((temperature - 32) * 5 / 9) 
    : (option == 'F') ?
    " degrees Centigrade is " + to_string((temperature * 9 / 5) + 32)
    : (option == 'K') ?
    " degrees Centigrade is " + to_string(temperature + 273.15)
    : "Invalid input"; // if neither C, F or K have been entered the programme gives this error

  cout << temperature << result;
}
