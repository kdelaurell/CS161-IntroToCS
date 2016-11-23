/***************************************
 * Author: Kyle De Laurell
 * Date: 10/18/15
 * Description: This program will determine
 * the distance an object falls due to gravity
 * in a specific time period.
 * ************************************/

/**************************************
 * description: This function will get 
 * a value, time,from a function and use it to calculate
 * the fall distance and it will then
 * return that distance back to the function
 * that called it.
 * ***********************************/
#include <iostream>
using namespace std;

double fallDistance(double time){
   double distance, gravity = 9.8;
   distance = (0.5 * gravity * time * time);
   return distance;
}
