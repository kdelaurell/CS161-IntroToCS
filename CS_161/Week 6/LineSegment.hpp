/***************************************************
 * Author: Kyle De Laurell
 * Date: 11/04/2015
 * Description: This is the LineSegment specification
 * file
 * ************************************************/
#ifndef LineSegment_HPP
#define LineSegment_HPP
#include "Point.hpp"
//define class LineSegment
class LineSegment
{
   private:
      Point end1;
      Point end2;

   public:
      LineSegment(Point, Point);
      void setEnd1(Point);
      void setEnd2(Point);
      Point getEnd1();
      Point getEnd2();  
      double length();
      double slope();
};

#endif
