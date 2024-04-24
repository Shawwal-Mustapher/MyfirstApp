#include <iostream>
#include <ctime>
#include <random>

using namespace std

int main() {
  // A random number generator for different results each time
  srand(static_cast<unsigned int>(time(0)));

  // Generating a random number between 0 and 11
  int daysUntilExpiration = rand() % 12;

  // Check subscription status
  if (daysUntilExpiration <= 0) {
    cout << "Your subscription has expired." <<endl;
  } else if (daysUntilExpiration <= 1) {
    cout << "Your subscription expires within a day! Renew now and save 20%!" <<endl;
  } else if (daysUntilExpiration <= 5) {
    cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" <<endl;
  } else {
    cout << "You have an active subscription." <<endl;
  }

  return 0;
} 
