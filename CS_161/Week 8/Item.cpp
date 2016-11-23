/******************************************************
 * Author: Kyle De Laurell
 * Date: 11/18/2015
 * Description: This is the Item Class implementation file.
 * ***************************************************/
#include "Item.hpp"
#include <string>
/******************************************************
 * Description: Default Constructor for Item class
 * ***************************************************/
Item::Item()
{
   setName("");
   setPrice(0.0);
   setQuantity(0);
}

/*******************************************************
 * Description: Constructor for item Class with inputs
 * ****************************************************/
Item::Item(std::string name, double price, int quantity)
{
   setName(name);
   setPrice(price);
   setQuantity(quantity);
}

/********************************************************
 * Description: sets the name of the Item class
 * ****************************************************/
void Item::setName(std::string nameInput)
{
   name = nameInput; 
}

/*******************************************************
 * Description: sets the price of the Item class
 * ****************************************************/
void Item::setPrice(double priceInput)
{
   price = priceInput;
}

/*******************************************************
 * Description: sets the quantity of the Item class
 * ****************************************************/
void Item::setQuantity(int quantityInput)
{
   quantity = quantityInput;
}

/*******************************************************
 * Description: gets the name of the Item
 * ****************************************************/
std::string Item::getName()
{
   return name;
}

/*******************************************************
 * Description: get the price of the Item
 * ****************************************************/
double Item::getPrice()
{
   return price;
}

/*******************************************************
 * Description: gets the quantity of the Item
 * ****************************************************/
int Item::getQuantity()
{
   return quantity;
}
