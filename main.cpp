//Maximillian Senisch
//Programming Fundamentals with Dr_T COSC 1436-57002
//IDE repl.it
//This program takes the total number of pennies you have collected and tells you what that equals in terms of dollars, quarters, dimes, nickels, and pennies.
#include <iostream>
using namespace std;

int main()
{ 
  //initialize variable
  int TotalPennies = 0; 
  int Dollars = 0, Quarters = 0, Dimes = 0, Nickels = 0, DollarsRemainder = 0, QuartersRemainder = 0, DimesRemainder = 0, NickelsRemainder = 0, validInput = 0;

  //Describe program and ask for input
    cout << "This program takes the total number of pennies you have collected and tells you what that equals in terms of dollars, quarters, dimes, nickels, and pennies.\n";
  
  while (validInput != 1)
  {
    cout << "Please enter the total number of pennies you have: ";
    cin >> TotalPennies;

    //This portion here is to test the validity of the input because you cannot have a negative number of physical pennies
    if (TotalPennies < 0)
    {
      validInput = 0;
      cout << "Error. The number of pennies you have must be positive.\n";
    }
    else if (TotalPennies > -1)
    {
      validInput = 1;
    }
  }


  //Process: Calculations
  Dollars = TotalPennies / 100;
  DollarsRemainder = TotalPennies % 100;
  Quarters = DollarsRemainder / 25;
  QuartersRemainder = DollarsRemainder % 25;
  Dimes = QuartersRemainder / 10;
  DimesRemainder = QuartersRemainder % 10;
  Nickels = DimesRemainder / 5;
  NickelsRemainder = DimesRemainder % 5;

  //Output the results in a user friendly manner
  cout << "\nThe number of pennies you have is equivalent to:\n";
  cout << Dollars;
  if (Dollars > 1 || Dollars == 0)
  {
    cout << " Dollars\n";
  }
  else if (Dollars < 2)
  {
    cout << " Dollar\n";
  }
  cout << Quarters;
  if (Quarters > 1 || Quarters == 0)
  {
    cout << " Quarters\n";
  }
  else if (Quarters < 2)
  {
    cout << " Quarter\n";
  }
  cout << Dimes;
  if (Dimes > 1 || Dimes == 0)
  {
    cout << " Dimes\n";
  }
  else if (Dimes < 2)
  {
    cout << " Dime\n";
  }
  cout << Nickels;
  if (Nickels > 1 || Nickels == 0)
  {
    cout << " Nickels ";
  }
  else if (Nickels < 2)
  {
    cout << " Nickel ";
  }
  cout << "and \n" << NickelsRemainder;
  if (NickelsRemainder > 1 || NickelsRemainder == 0)
  {
    cout << " Pennies\n";
  }
  else if (NickelsRemainder < 2)
  {
    cout << " Penny\n";
  }

  return 0;
}