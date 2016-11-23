/******************************************************
 * Author: Kyle De Laurell
 * Date: 11/4/2015
 * Description: This is the implementation file for the 
 * Class Point.
 * ***************************************************/
#include "Point.hpp"
#include <cmath>

/******************
*Description: Default constructor
******************/
Point::Point() 
{
   setXCoord(0);
   setYCoord(0);
}

/*******************
 *Description: Point construcor if variable given
 * *************/
Point::Point(double x, double y)
{
   setXCoord(x);
   setYCoord(y);
}

/*************************************************
 * Description: sets X coordinate for Point class
 * *********************************************/
void Point::setXCoord(double x)
{
   xCoord = x;
}

/***********************************************
 * Description:sets Y coordinate for Point class
 * *********************************************/
void Point::setYCoord(double y)
{
   yCoord = y;
}
/***********************************************
 * Description:gets X Coordinate for Point class
 **********************************************/
double Point::getXCoord() const
{
   return xCoord;
}
/************************************************
 * Description: gets Y Coordinate for Point class
 * *********************************************/
double Point::getYCoord() const
{
   return yCoord;
}
/*************************************************
 * Description: calculates the distance between
 * two points.
 * *********************************************/ 
double Point::distanceTo(const Point &point)
{
    return (sqrt((yCoord - point.getYCoord())*(yCoord  - point.getYCoord()) +
                  (xCoord - point.getXCoord())*(xCoord - point.getXCoord()))); 
}

