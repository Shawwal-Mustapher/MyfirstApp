#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for isalpha

using namespace std;

// Function to reverse a string
string Reverse(const string& str) {
  string reversed;
  for (int i = str.length() - 1; i >= 0; i--) {
    reversed += str[i];
  }
  return reversed;
}

// Function to capitalize the second letter of each word
string CapitalizeSecondLetter(const string& str) {
  string capitalized;
  bool capitalizeNext = true; // Flag to capitalize next letter

  for (char c : str) {
    if (isalpha(c)) {
      capitalized += capitalizeNext ? toupper(c) : c;
      capitalizeNext = false; // Reset flag after first letter of word
    } else {
      capitalized += c;
      capitalizeNext = true; // Set flag for next word
    }
  }

  return capitalized;
}

int main() {
  string Exercise6 = "Exercise6.TXT"; 
  string fileData;

  // Open the text file
  ifstream file(Exercise6);
  if (!file.is_open()) {
    cerr << "Error opening file: " << Exercise6 << endl;
    return 1;
  }

  // Read file contents into string
  getline(file, fileData);

  // Close the file
  file.close();

  // Count vowels
  int vowelCount = 0;
  for (char c : fileData) {
    c = tolower(c); // Convert to lowercase for case-insensitive counting
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowelCount++;
    }
  }

  // Count words (assuming words are separated by spaces)
  int wordCount = 1;
  for (char c : fileData) {
    if (isspace(c)) {
      wordCount++;
    }
  }

  // Reverse the text
  string reversedText = Reverse(fileData);

  // Capitalize second letter of each word
  string capitalizedText = CapitalizeSecondLetter(fileData);

  // Output results
  cout << "Original text: " << fileData << endl;
  cout << "Number of vowels: " << vowelCount << endl;
  cout << "Number of words: " << wordCount << endl;
  cout << "Reversed text: " << reversedText << endl;
  cout << "Capitalized second letters: " << capitalizedText << endl;

  return 0;
}
