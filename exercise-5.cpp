/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2B-Exercise-5#main.cpp
Exercise:
Prompt the user for their current age and the age they want to retire at. Calculate the number of years remaining until the user can retire and output the result in the specified format. The extension is to give different outputs when the user is at or past their stated retirement age.
*/
#include <iostream>
#include <ctime>
using namespace std;

int main() {
  time_t now = time(0);
  tm * ltm = localtime(&now);
  int current_year = 1900 + ltm->tm_year;
  int current_age, retire_age;

  cout << "Please enter your current age? ";
  cin >> current_age;
  cout << "At what age would you like to retire? ";
  cin >> retire_age;

  int years_left = retire_age - current_age;
  int years_ago = current_age - retire_age;
  int retire_year = current_year + years_left;

  if (years_left == 0) {
    cout << "The current year is " << current_year << ", you can retire now.";
  }
  else if (years_left < 0) {
    cout << "The current year is " << current_year << ", you could have retired in " << retire_year << "; this was " << years_ago << " years ago.";
  }
  else {
    cout << "The current year is " << current_year << ", can retire in " << retire_year << "; you have " << years_left << " years remaining.";
  }
}
