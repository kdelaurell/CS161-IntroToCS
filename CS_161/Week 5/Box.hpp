/*************************************
* Author: Kyle De Laurell
* Date: 10/28/2015
* Description: Box.hpp is the Box class
* specification file.
* ************************************/

#ifndef Box_HPP
#define Box_HPP

//defines the class Box
class Box
{
   private:
      double length;
      double width;
      double height;

   public:
      bool setHeight(double);
      bool setWidth(double);
      bool setLength(double);
      double getVolume();
      double getSurfaceArea();
};

#endif

