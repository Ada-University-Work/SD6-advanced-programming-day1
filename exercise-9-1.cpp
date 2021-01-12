//This version includes the extension task but does not work
/* 
https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2C-Exercise-9-1#main.cpp
Exercise:
Prompt the user to enter a character and then output wether the character is alphabetic, decimal or special. Extension is to use getchar() instead of cin.
*/
#include <iostream>
using namespace std;

int main() {
  bool try_again = true;
  char input, try_again_input;

  while (try_again == true) {
    cout << "Please enter a character? ";
    input = getchar();
    
    if (isalpha(input)){
      cout << "Alphabetic character detected.\n";
    }
    else if (isdigit(input)) {
      cout << "Decimal Digit character detected.\n";
    }
    else {
      cout << "Special character detected.\n";
    }

    cout << "Try again? (Y/N)? ";
    try_again_input = getchar();

    try_again = (try_again_input == 'Y') ? true : false;
  }
  cout << "Thank you, good bye.";
}
