/* https://repl.it/@CharlieHodgkin1/SD6-Workshop-1-2A-Exercise-1#main.cpp
Exercise:
Ask the user for a quote and the author and then display the input in the format: author says: "quote"

My general approach is to get the input from the user and then concatenate it before outputting. The main issue is getting input from the user that has multiple words.
*/
#include <iostream>
using namespace std;

int main() {
  string quote;
  string author;
  cout << "What is the quote?\n";
  getline(cin, quote);
  cout << "Who said it?\n";
  getline(cin, author);
  cout << author + " says: \"" + quote + "\"";
}
