/*******************************************************
 * Author: Kyle De Laurell
 * Date:11/10/15
 * Description: This program will find the mode or modes
 * of an array and return them to a vector.
 ******************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef int arrayType[];

vector<int> findMode(arrayType, int);
/********************************************
int main()
{
   const int SIZE = 6;
   int numbers[] = {1,2,3,4,1,2};
   vector<int> results = findMode(numbers, SIZE);
   cout << results[0] << endl;
   cout << results[1] << endl;

   for(int i = 0; i < results.size(); i++);
    // cout << results(i) << endl;
   return 0;
}
*********************************************/
vector<int> findMode(arrayType nums, int size)
{
   //sorts intial array
   sort(nums,nums + size);
   //intializes results vector
   vector<int> results;
   int freqArray[size];

   //finds highest frequency of numbers 
   for(int counter = 0; counter < size; counter++)
   {  
    int frequency = 0;
       for(int index = 0; index < size; index++)
       {
         if (nums[index] == nums[counter])
            frequency++;
       }
       freqArray[counter] = frequency;
       frequency = 0;
    }
    //finds the highest amount of times a number
    //shows up in the array
    int max = freqArray[0];
    for(int counter = 0; counter < size; counter++)
    {
       if(freqArray[counter] >= max)
          max = freqArray[counter];
    }
    
    //finds the highest frequency number/numbers and puts them in an array
    for(int counter = 0; counter < size; counter++)
    {
       if (freqArray[counter] == max)
          results.push_back(nums[counter]);
        
       if (results.size() >= 2)
       {
          int vectorSize = results.size();
          if (results[vectorSize - 2] == results[vectorSize - 1])
             results.pop_back();
       }
     }  
      
     return results;   
}
