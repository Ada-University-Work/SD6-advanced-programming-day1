/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-3#main.cpp
Exercise:
Prompt the user for the length and width of a room in feet and then display the area in both feet and meters squared. The extension is to validate that the input is numeric and accept support inputs provided as meters or feet.
*/
#include <iostream>
using namespace std;

int main() {
  int length;
  int width;
  float conversionFactor = 0.09290304;

  cout << "What is the length of the room in feet?";
  cin >> length;

  cout << "What is the width of the room in feet?";
  cin >> width;

  int dimensionFeet = length * width;
  float dimensionMeters = dimensionFeet * conversionFactor;

  cout << "Your room’s dimesion is " << length << " by " << width << " feet, the area is:\n";
  cout << dimensionFeet << " square foot\n";
  cout << dimensionMeters << " square meters";
}
