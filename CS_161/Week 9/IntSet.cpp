/***************************************
 * Author: Kyle De Laurell
 * Date: 11/24/2015
 * Description: This is the IntSet Class
 * implementation file.
 * ************************************/

#include "IntSet.hpp"
/*********************************
 * Description: this is the constructor
 * ******************************/
IntSet::IntSet()
{
   arraySize = 10;
   numValues = 0;
   intArray = new int[arraySize];
}
/*********************************
 * Description: This is the destructor
 * *****************************/
IntSet::~IntSet()
{
   delete [] intArray;
}
/**************************************
 * Description: This checks the size of the Set
 * **********************************/
int IntSet::size() const
{
   return numValues;
}
/*******************************************
 * description: This check to see if a value 
 * is contained in the set
 * ***************************************/
bool IntSet::contains(int num) const
{
   bool numInSet = false;
   for(int counter = 0; counter < numValues; counter++)
   {
      if(intArray[counter] == num)
         numInSet = true;
   }
   return numInSet;
}
/****************************
 * Description: Checks to see if set is empty
 * ************************/
bool IntSet::isEmpty()
{
   bool empty = false;
   if (numValues == 0)
      empty = true;

   return empty;
}
/******************************************
 * Description: This adds new values to setA
 * ***************************************/
void IntSet::add(int x)
{
   bool containInt = contains(x);

   if (containInt != true)
   {
      numValues++;
      if(numValues > arraySize)
      {  
         arraySize *= 2;
         int *newArray = new int[arraySize];
         for(int index2 = 0; index2 < (numValues -1); index2++)
           newArray[index2] = intArray[index2];
         newArray[numValues - 1] = x;
         delete [] intArray;
         intArray = newArray;
         //cout << "ADDED " << intArray[numValues - 1] << endl;
      }
      else
      {
         intArray[numValues - 1] = x;
         //cout << "ADDED: "  << intArray[numValues - 1] << endl;
      }
    }
}  

/************************************
 * Description: This removes a number 
 * from the Set
 * ********************************/

void IntSet::remove(int num)
{
   bool removeNum = contains(num);

   int naCount = 0;
   if (removeNum)
   {
      //cout << "Removing " << num << endl;
      numValues--;
      int *newArray = new int[arraySize];
      for(int index3 = 0; index3 <= numValues; index3++)
      {
         if(intArray[index3] != num)
         {
           newArray[naCount] = intArray[index3];
           naCount++;
         }
      }
      delete [] intArray;
      intArray = newArray;
   }
}
/****************************************
 * Description: This adds all different 
 * values from Set B to Set A
 * ************************************/
void IntSet::addAll(const IntSet& setB)
{
   int setBSize = setB.size();
   //cout << "ADDING B" << endl;
   for(int index4 = 0; index4 < setBSize; index4++)
   {
      if(!(contains(setB.intArray[index4])))
         add(setB.intArray[index4]);
   }
   //cout << "DONE ADDING B" << endl;
}
/*****************************************
 * Description: This removes different values
 * from setA
 * ******************************************/
void IntSet::removeDifferent(const IntSet& setB)
{ 
   int counter[1000];
   int numDiff = 0;
   for(int index = 0; index < numValues; index++)
   { 
      if(!(setB.contains(intArray[index])))
      {
         counter[numDiff] = intArray[index];
         numDiff++;
      }
   }
   for(int index2 = 0; index2 <= numDiff; index2++)
      remove(counter[index2]);
       
}
/****************************************
 * Description: Removes same values from set A
 * ***************************************/
void IntSet::removeSame(const IntSet& setB)
{
   int bSize = setB.size();   
   for(int index = 0; index < bSize; index++)
   {
      if(contains(setB.intArray[index]))
         remove(setB.intArray[index]);
   }
}
      
