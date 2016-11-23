/****************************************
 * Author: Kyle De Laurell
 * Date: 10/18/15
 * Description: This program will given 
 * a certain number tell you how many
 * iterations of the hailstone sequence
 * it takes to reach 1.
 * *************************************/
/****************************************
 * Description: This function accepts on
 * integer from the calling function and
 * performs the hailstone sequence and
 * returns how many times it took to 
 * reach the first one.
 * *************************************/
#include <iostream>
using namespace std;

int hailstone(int num){
int count = 0;

while(num != 1){
   if((num % 2) == 0){
      num /= 2;
   }
   else{
      num = (num * 3) + 1;
   }
   count++;
}

return count;
}
