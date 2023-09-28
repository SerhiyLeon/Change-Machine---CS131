// Serhiy Leonchyk
// Change Machine

// This Progam Will Prompt the User for an Amount That Should
// be Given in Change, and it will tell the user the amount
// of quarters, dimes, nickels, and pennies that should be given
// this program uses if and for loops to do this task


#include <iostream>
using namespace std;


int main()
{
// Local Variables
int change;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;
// Prompt and Get Change
cout << "****************************************" << endl;
cout << "*** This is the Happy Change Machine ***" << endl;
cout << "****************************************" << endl << endl;
cout << "Please enter the amount of change to be given: ";
cin >> change;
cout << endl;
if (change >= 25)
{
  for (int i = 1; change >= 25; i++)
  {
    change = change - 25;
    quarters = i;
  }
}// if (change >= 25)
if (change >= 10)
{
  for (int i = 1; change >= 10; i++)
  {
  change = change - 10;
  dimes = i;
  }
}// if (change >= 10)
if (change >= 5)
{
  for (int i = 1; change >= 5; i++)
{
change = change - 5;
nickels = i;
}
}// if (change >= 5)
if (change >= 1)
{
  for (int i = 1; change >= 1; i++)
  {
  change = change - 1;
  pennies = i;
  }
}// if (change >= 1)
cout << quarters << " Quarters"<< endl;
cout << dimes << " Dimes" << endl;
cout << nickels << " Nickels" << endl;
cout << pennies << " Pennies" << endl;
return 0;
}
