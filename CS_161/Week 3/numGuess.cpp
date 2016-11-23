/****************************************
 * Author: Kyle De Laurell
 * Date: 10/13/15
 * Description: This program is a game of
 * Hi-Lo where user guesses a number the 
 * program tells you too high or too low
 * until you guess correctly
 * ***************************************/

#include <iostream>

using namespace std;

int main()
{
   //declare variables
   int targetNumber, guess, numGuesses = 0;

   //Asks user for Target Number
   cout << "Enter the number for the player to guess." << endl;
   cin >> targetNumber;

   //user guesses program tells whether too high, too low,
   //or guessed correctly and how many tries it took.
   cout << "Enter your guess." << endl;

   do{
         cin >> guess;

         numGuesses++;
 
         if(guess > targetNumber){
            cout << "Too high - try again." << endl;
         }
         else if(guess < targetNumber){
            cout << "Too low - try again." << endl;
         }
         else{
            cout << "You guessed it in " << numGuesses
                 << " tries." << endl;
         }
      }while(guess != targetNumber);
   
   return 0;
}
