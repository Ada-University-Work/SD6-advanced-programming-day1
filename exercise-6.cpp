/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-6#main.cpp
Exercise:
Prompt the user for their age and resting heart rate then use the Karvonen formular to determine the target heart rate for stepped intensities from 40% to 95% using a for loop to increment the percentage values. The extension is to change the for loop to a do/while loop.
*/
#include <iostream>
using namespace std;

int main() {
  int age, rest_pulse, target_pulse;
  int intensity = 40;
  double intensity_decimal;

  cout << "Please enter your age: ";
  if( ! (cin >> age)) {
    cout << "Invalid Input";
    return 0;
  }

  cout << "Please enter your resting pulse: ";
  if( ! (cin >> rest_pulse)) {
    cout << "Invalid Input";
    return 0;
  }

  cout << "\nResting pulse: " << rest_pulse << " Age: " << age << endl;
  cout << "\nIntensity\tRate\n-------------------\n";

  do {
    intensity_decimal = double(intensity)/100;
    target_pulse = (((220 - age) - rest_pulse ) * intensity_decimal) + rest_pulse;

    cout << intensity << "%\t\t\t" << target_pulse << " bpm\n";
    intensity += 5;
  }
  while (intensity <= 95);
}
