#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void showMenu();
void showFees(double, int);


int main() 
{
  int choice;//Holds menu choice
  int months;//Holds number of months

  //constants for the menu choices
  const int ADULT_CHOICE = 1,
            CHILD_CHOICE = 2,
            SENIOR_CHOICE = 3,
            QUIT_CHOICE = 4;

  //constants for membership rates

  const double ADULT = 40.00,
               CHILD = 20.00,
               SENIOR = 15.00;
  

  //SET Up numberic output formatting

cout << fixed << showpoint << setprecision(2);

do
{//display the menu and get the user's choice
    showMenu();
    cout << "Enter your choice: ";
    cin >> choice;

    //validate the menu selection
    while(choice < ADULT_CHOICE || choice > QUIT_CHOICE)
    {
      cout << "Please enter a valid menu choice: ";
      cin >> choice;
    }


  //if the user doesn't want to quit, proceed.

  if (choice != QUIT_CHOICE)
  {
    // Get the number of months.
    cout << "For how many months? ";
    cin >> months;

    // Display the membership feed.
    switch(choice)
    {
      case ADULT_CHOICE:
          showFees(ADULT, months);
          break;
      case CHILD_CHOICE:
          showFees(CHILD, months);
          break;
      case SENIOR_CHOICE:
          showFees(SENIOR, months);
          break;
    }
  }
} while (choice != QUIT_CHOICE);
  return 0;
} 

void showMenu()
{
  cout << "MENU\n"
      << "1. ADULT\n"
      << "2. CHILD\n"
      << "3. SENIOR\n"
      << "4. QUIT_CHOICE\n";
}

void showFees(double memberRate, int months)
{
  cout << " The total charges are $"
      << (memberRate * months) << endl;
}
