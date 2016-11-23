/****************************************
 * Author: Kyle De Laurell
 * Date: 10/28/2015
 * Description:Box.cpp is the Box class
 * function implementation file.
 * *************************************/
#include "Box.hpp"

/****************************************
 *              Box::setHeight
 * If the argument passed to setHeight
 * function is zero or greater then it is
 * copied to height and true is returned. 
 * If it is not then the value of height
 * remains unchanged and false is returned.
 * *************************************/

bool Box::setHeight(double h)
{
   bool validData = true;

   if (h > 0)
      height = h;
   else
      validData = false;

   return validData;
}; 
/******************************************
 *            Box::setWidth
 * If the argument passed to the setWidth
 * function is zero or greater than it is
 * copied to width and true is returned.
 * If not then width remains unchanged and
 * false is returned;
 * ***************************************/
bool Box::setWidth(double w) 
{
   bool validData = true;

   if (w > 0)
      width = w;
   else
      validData = false;
   return validData;
};
/******************************************
 *            Box::setLength
 * If the argument passed to the setLength
 * function is zero or greater than it is
 * copied to length and true is returned. If
 * not then length is unchanged and false is
 * returned.
 * ***************************************/
bool Box::setLength(double l)
{
   bool validData = true;

   if (l > 0)
      length = l;
   else
      validData = false;

   return validData;
};

/*******************************************
 *              Box::getVolume
 * This function calculates and returns the
 * volume of the box.
 * ****************************************/
double Box::getVolume()
{
   double volume = (length * width * height);
   return volume;
};
/******************************************
 *              Box::getSurfaceArea
 * This function calculates and returns the
 * surface area of the box.
 * ***************************************/
double Box::getSurfaceArea()
{
   double surfaceArea = ((2 * length * width) + (2 * width * height)
                 + (2 * length * height));
   return surfaceArea;
};
 
