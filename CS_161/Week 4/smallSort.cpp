/**************************************
 * Author: Kyle De Laurell
 * Date: 10/18/15
 * Description: This program will take
 * 3 numbers and order them from small
 * to large.
 * ***********************************/
/**************************************
 * Description: This function takes 
 * reference variables and orders them
 * from smallest to largest.
 * ***********************************/
#include <iostream>

using namespace std;

void smallSort(int &num1, int &num2, int &num3)
{
int temp = 0;
if(num1 > num2){
   temp = num1;
   num1 = num2;
   num2 = temp;
}
if(num2 > num3){
   temp = num2;
   num2 = num3;
   num3 = temp;
}
if(num1 > num2){
   temp = num1;
   num1 = num2;
   num2 = temp;
}
}
