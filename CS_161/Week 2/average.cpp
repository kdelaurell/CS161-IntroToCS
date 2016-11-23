#include <iostream>

using namespace std;

int main() 
{
   double num1, num2, num3, num4, num5, average;
  

   cout << "Please enter five numbers." << endl;

   cin >> num1 >> num2 >> num3 >> num4 >> num5;

   average = (num1 + num2 + num3 + num4 + num5)/5;

   cout << "The average of those numbers is: " << endl 
        << average << endl;


   return 0;
}
