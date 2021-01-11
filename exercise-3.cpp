/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-3#main.cpp
Exercise:
Prompt the user for the length and width of a room in feet and then display the area in both feet and meters squared. The extension is to validate that the input is numeric and accept support inputs provided as meters or feet.
*/
#include <iostream>
using namespace std;

bool is_number(string str) { // checks if input is a number or decimal number and returns true if it is
  for (int i = 0; i < str.length(); i++)
    if (isdigit(str[i]) == false && str[i] != '.')
      return false;
  return true;
}

int main() {
  string length_input;
  string width_input;
  string unit;
  string converted_unit;
  char chosen_unit;
  double conversion_factor;

  cout << "Press 'F' to enter the dimensions in Feet.\nPress 'M' to enter the dimensions in Metres.\n";
  cin >> chosen_unit;
  chosen_unit = toupper(chosen_unit);

  if (chosen_unit == 'F') {
    unit = "feet";
    converted_unit = "metres";
    conversion_factor = 0.09290304;
  }
  else if (chosen_unit == 'M') {
    unit = "metres";
    converted_unit = "feet";
    conversion_factor = 10.76391042;
  }
  else {
    cout << "Invalid input";
    return 0;
  }

  cout << "\nWhat is the length of the room in " + unit + "? ";
  cin >> length_input;

  cout << "What is the width of the room in " + unit + "? ";
  cin >> width_input;

  if (is_number(length_input) && is_number(width_input)) {
    double length = stod(length_input);
    double width = stod(width_input);

    double dimensions = length * width;
    double dimensions_converted = dimensions * conversion_factor;

    cout << "\nYour room’s dimesion is " << length << " by " << width << " " + unit  + ", the area is:\n";
    cout << dimensions << " square " + unit + "\n";
    cout << dimensions_converted << " square " + converted_unit;
  }
  else {
    cout << "Error\nInput must be a number";
    return 0;
  }
}
