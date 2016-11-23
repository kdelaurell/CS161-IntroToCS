/**************************************
 * Author: Kyle De Laurell
 * Date: 10/12/15
 * Description: This program will ask user
 * for file name, input that file, calculate
 * average and then write a new file with 
 * just the average in it.
 * ************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   //declare variables/files
   ifstream inputFile;
   ofstream outputFile;
   string filename;
   int sum = 0, number;

   //gets filename from user and opens file for reading
   cout << "Please enter the filename you would like to " << endl
        << "calculate the sum for:" << endl;
   cin >> filename;

   inputFile.open(filename.c_str());
   
   //checks to see if file was found and if so
   //sums all the numbers in file and outputs to
   //new file. if not then displays that file
   //was not found.
   if(inputFile)
   {
      while(inputFile >> number)
      {
         sum += number;
      }
      outputFile.open("sum.txt");
      outputFile << sum << endl;
   }
   else
   {
   cout << "could not access file" << endl;
   }
   
   //close files
   inputFile.close();
   outputFile.close();

   return 0;
}
