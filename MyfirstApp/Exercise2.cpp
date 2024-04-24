#include <iostream>
#include <ctime>

using namespace std;

int main() {
  // Setting a random number generator each time the code runs
  srand(static_cast<unsigned int>(time(0)));

  // Generating a random number between 0 and 11
  int daysUntilExpiration = rand() % 12;

  // Check subscription status using switch
  switch (daysUntilExpiration) {
    case 0:
    case -1:  // Handle expired case (0 or negative value)
      cout << "Your subscription has expired." <<endl;
      break;
    case 1:
      cout << "Your subscription expires within a day! Renew now and save 20%!" <<endl;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" <<endl;
      break;
    default:
      cout << "You have an active subscription." <<endl;
  }

  return 0;
}
