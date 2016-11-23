/*********************************************
 * Author: Kyle De Laurell
 * Date: 11/18/2015
 * Description: This is the ShoppingCart Class
 * Specification file.
 * ******************************************/

#ifndef ShoppingCart_HPP
#define ShoppingCart_HPP
#include "Item.hpp"
//defines the Shopping Cart class
class ShoppingCart
{
   private:
      int arrayEnd;
      Item* itemArray[100];
      
      
   public:
      ShoppingCart();
      ShoppingCart(Item*);
      void addItem(Item*);
      double totalPrice();

};

#endif
      
