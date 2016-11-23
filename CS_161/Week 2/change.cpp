#include <iostream>

using namespace std;

int main()
{
   int numCents, quarters, dimes, nickels, pennies, remainder;

   cout << "Please enter an amount in cents "
        << "less than a dollar." << endl;
    cin >> numCents;

   quarters = numCents/25;
   numCents %= 25;

   dimes = numCents/10;
   numCents %= 10;

   nickels = numCents/5;
   numCents %= 5;

   pennies = numCents/1;

   cout << "Your change will be:" << endl
        << "Q: " << quarters << endl 
        << "D: " << dimes << endl
        << "N: " << nickels << endl
        << "P: " << pennies << endl;

   return 0;

}  
