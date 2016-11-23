/********************************************************
 * Name: Kyle De Laurell
 * Date: 11/29/2015
 * Description: This is the Patron class implementation
 * file.
 *******************************************************/
#include "Patron.hpp"
#include <string>
#include <vector>
/******************************************************
 * Description: This is the constructor.
 *****************************************************/
Patron::Patron(std::string idn, std::string n)
{
   idNum = idn;
   name = n;
   fineAmount = 0.0;
}
/*******************************************************
 * Description: This gets the Patrons ID Number.
 ******************************************************/
std::string Patron::getIdNum()
{
   return idNum;
}
/*******************************************************
 * Description: This gets the Patrons Name.
 ******************************************************/
std::string Patron::getName()
{
   return name;
}
/*******************************************************
 * Description: This gets the Patrons Checked Out Books
 * vector.
 ******************************************************/
std::vector<Book*> Patron::getCheckedOutBooks()
{
   return checkedOutBooks;
}
/*******************************************************
 * Description: This adds a book to the Patrons Checked
 * Out Books Vector.
 ******************************************************/
void Patron::addBook(Book* b)
{
   checkedOutBooks.push_back(b);
}
/*******************************************************
 * Description: This removes a book from the Patrons 
 * Checked Out Books Vector.
 ******************************************************/
void Patron::removeBook(Book* b)
{
   int index6;
   int size = checkedOutBooks.size();
   int bookI;
   for(index6 = 0; index6 < size; index6++)
      {
      if(checkedOutBooks.at(index6)->getTitle() == b->getTitle())
         bookI = index6;
      }
   checkedOutBooks.erase(checkedOutBooks.begin() + bookI);
}
/*******************************************************
 * Description: This get the amount of Fines the Patron
 * has against him/her.
 ******************************************************/
double Patron::getFineAmount()
{
   return fineAmount;
}
/*******************************************************
 * Description: This amends the fine amount based on the
 * payment or fine.
 ******************************************************/
void Patron::amendFine(double amount)
{
   double oldFineAmount = getFineAmount();
   fineAmount = oldFineAmount + amount;
}
