/****************************************
 * Author: Kyle De Laurell
 * Date: 11/18/2015
 * Description: This is the Item Class
 * specification file
 * **************************************/

#ifndef Item_HPP
#define Item_HPP
#include <string>

//defines Item class
class Item
{
   private:
      std::string name;
      double price;
      int quantity;
      
   public:
      Item();
      Item(std::string , double, int);
      void setName(std::string);
      void setPrice(double);
      void setQuantity(int);
      std::string getName();
      double getPrice();
      int getQuantity();
};

#endif
