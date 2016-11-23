/********************************************************
 * Author: Kyle De Laurell
 * Date: 10/28/2015
 * Description: This is the point class specification file.
 * *****************************************************/

#ifndef Point_HPP
#define Point_HPP

//defines the Point class
class Point
{
   private:
      double xCoord;
      double yCoord;

   public:
      Point();
      Point(double, double);
      void setXCoord(double);
      void setYCoord(double);
      double getXCoord() const;
      double getYCoord() const;
      double distanceTo(const Point&);

};
#endif
