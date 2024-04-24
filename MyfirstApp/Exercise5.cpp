#include <iostream>
#include <cmath> // for sqrt function (triangle area)

using namespace std;

// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
  char choice;

  do {
    // Menu for shape selection
    cout << "\nSelect a shape to calculate the area:\n";
    cout << "  (1) Triangle\n";
    cout << "  (2) Rectangle\n";
    cout << "  (3) Square\n";
    cout << "  (4) Quit\n";
    cout << "Enter your choice: ";

    cin >> choice;

    // Input validation for shape selection
    while (choice != '1' && choice != '2' && choice != '3' && choice != '4') {
      cout << "Invalid choice. Please enter '1', '2', '3', or '4': ";
      cin >> choice;
    }

    if (choice == '4') {
      break; // Exit loop if user chooses quit
    }

    // Get data based on chosen shape
    double data1, data2;
    switch (choice) {
      case '1':
        cout << "Enter base and height of the triangle: ";
        cin >> data1 >> data2;
        break;
      case '2':
        cout << "Enter length and width of the rectangle: ";
        cin >> data1 >> data2;
        break;
      case '3':
        cout << "Enter side length of the square: ";
        cin >> data1;
        break;
    }

    // Calculate and display area based on shape
    double area;
    switch (choice) {
      case '1':
        area = calculateTriangleArea(data1, data2);
        cout << "Triangle area: " << area << endl;
        break;
      case '2':
        area = calculateRectangleArea(data1, data2);
        cout << "Rectangle area: " << area << endl;
        break;
      case '3':
        area = calculateSquareArea(data1);
        cout << "Square area: " << area << endl;
        break;
    }

  } while (true); // Loop continues until user quits

  return 0;
}

// Function to calculate triangle area (Heron's formula)
double calculateTriangleArea(double base, double height) {
  double tArea = (base + height) / 2.0;
  return tArea;
}

// Function to calculate rectangle area
double calculateRectangleArea(double length, double width) {
  return length * width;
}

// Function to calculate square area
double calculateSquareArea(double side) {
  return side * side;
}

