/**********************************************
 * Author: Kyle De Laurell
 * Date: 11/04/2015
 * Description: This is the implementation file
 * for the LineSegment class
 * *******************************************/
#include "LineSegment.hpp"

/********************************************
 * Description: This is the constructor for the
 * LineSegment
 * ******************************************/
LineSegment::LineSegment(Point point1, Point point2)
{
   setEnd1(point1);
   setEnd2(point2);
}

/*********************************************
 * Description: This sets a Point to End point 1
 * ******************************************/
void LineSegment::setEnd1(Point point1)
{
   end1 = point1;
}
/**********************************************
 * Description: this sets a Point to End Point 2
 * ********************************************/
void LineSegment::setEnd2(Point point2)
{
   end2 = point2;
}
/***********************************************
 * Description: This grabs and returns end point 1
 * ********************************************/
Point LineSegment::getEnd1()
{
   return end1;
}
/**********************************************
 * Description: This returns end point 2
 * *******************************************/
Point LineSegment::getEnd2()
{
   return end2;
}

/***********************************************
 * Description: This calculates the length 
 * of the line segment.
 * *******************************************/
double LineSegment::length()
{
   end1.distanceTo(end2);
}
/************************************************
 * Description: This calculates the slope of 
 * the LineSegment.
 * **********************************************/
double LineSegment::slope()
{
   return ((end2.getYCoord()-end1.getXCoord())/
           (end2.getXCoord()-end1.getXCoord()));  
}
