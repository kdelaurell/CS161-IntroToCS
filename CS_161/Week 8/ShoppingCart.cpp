/***************************************
 * Author: Kyle De Laurell
 * Date: 11/18/2015
 * Description: This is the Shopping Cart
 * class implementation file.
 ***************************************/
#include "Item.cpp"
#include "ShoppingCart.hpp"

/********************************************
 * Description: Default constructor
 * *****************************************/
ShoppingCart::ShoppingCart()
{
   for(int index = 0; index < 100; index++)
      itemArray[index] = 0;
   arrayEnd = 0;
}

/********************************************
 * Description: This function adds an item 
 * to the pointer array.
 * *****************************************/
void ShoppingCart::addItem(Item &newItem)
{
   itemArray[arrayEnd] = newItem;
   arrayEnd++;
}

/*********************************************
 * Description: This function calculates the
 * Total cost of all items in the shopping
 * cart.
 * ******************************************/
double ShoppingCart::totalCost()
{
   for(int count = 0; count < arrayEnd; count++)
   {
     double total += ((*itemArray[count]).getPrice() *
                     (*itemArray[count].getQuantity));
   };
   return total;
}
