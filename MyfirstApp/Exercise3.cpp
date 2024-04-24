#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declaring an array of strings
  string myArray[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

  // Loop through the array
  for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
    // Checks if there are elements starts with "B"
    if (myArray[i].substr(0, 1) == "B") {
      cout << myArray[i] <<endl;
    }
  }

  return 0;
}
