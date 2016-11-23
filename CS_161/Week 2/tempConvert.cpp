#include <iostream>

using namespace std;

int main()
{
   double degC, degF;

   cout << "Please enter a Celsius temperature." << endl;
   cin >> degC;
      
   degF =  ((float)(9)/5)*degC + 32;

   cout << "The equivalent Fahrenheit temperature is:" << endl
        << degF << endl;

   return 0;
}
