#include <iostream>
#include <limits>

using namespace std;

int main() {
  int number;

  // Loop to keep prompting until valid input is received
  while (true) {
    cout << "Enter an integer value between 5 and 10: ";

    // Input validation with error handling
    if (!(cin >> number)) {
      cout << "Invalid input. Please enter an integer." <<endl;
      cin.clear(); // Clear the error state from the input stream
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    } else if (number < 5 || number > 10) {
      cout << "Number must be between 5 and 10. Please try again." <<endl;
    } else {
      break; // Exit the loop if valid input is received
    }
  }

  // accepted input
  cout << "Your input " << number << " has been accepted." <<endl;

  return 0;
}
