/*********************
 * Author: Kyle De Laurell
 * Date: 10/12/15
 * Description: This program asks a user
 * how many integers they would like to
 * enter and then after the user inputs
 * the integers the program calculates and
 * displays the max and min
 * **********************/
#include <iostream>

using namespace std;

int main()
{

   int integer, numIntegers, max, min, counter;

   //asks user for input
   cout << "How many integers would you like to enter?" << endl;
   cin >> numIntegers;

   cout << "Please enter " << numIntegers << " integers." << endl;
   cin >> integer;
   max = integer;
   min = integer;

   //loop that gets number and checks if it is new max or min
   for( counter = 1; counter < numIntegers; counter++)
   {
      cin >> integer;
      if(integer > max)
      {
         max = integer;
      }
      if(integer < min)
      {
         min = integer;
      }
    }
   
   //displays min and max
   cout << "Min:  " << min << endl;
   cout << "Max:  " << max << endl;

   return 0;

}
