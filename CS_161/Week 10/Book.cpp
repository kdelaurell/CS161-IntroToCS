 /*******************************************************
 * Name: Kyle De Laurell
 * Date: 11/28/2015
 * Description: This is the Book Class implementation file.
 *******************************************************/

#include "Book.hpp"
#include <string>
/*********************************************************
 * Description: This is the constructor.
 ********************************************************/

Book::Book(std::string idc, std::string t, std::string a)
{
   idCode = idc;
   title = t;
   author = a;
   setLocation(ON_SHELF);
   setCheckedOutBy(NULL);
   setRequestedBy(NULL);
   setDateCheckedOut(0);
}

/********************************************************
 * Description: gets CheckOutLength
 *******************************************************/

int Book::getCheckOutLength()
{
   return CHECK_OUT_LENGTH;
}

/********************************************************
 * Description: gets ID code
 * *****************************************************/

std::string Book::getIdCode()
{
   return idCode;
}

/********************************************************
 * Description: gets Title
 * *****************************************************/

std::string Book::getTitle()
{
   return title;
}

/********************************************************
 * Description: gets the author
 * *****************************************************/

std::string Book::getAuthor()
{
   return author;
}

/********************************************************
 * Description: gets the location
 * *****************************************************/

Locale Book::getLocation()
{
   return location;
}

/********************************************************
 * description: this sets the location
 *******************************************************/

void Book::setLocation(Locale l)
{
   location = l;
}

/********************************************************
 * Description: gets the CheckedOutBy
 *******************************************************/

Patron* Book::getCheckedOutBy()
{
   return checkedOutBy;
}

/********************************************************
 * Description: sets checkedOutBy
 *******************************************************/

void Book::setCheckedOutBy(Patron* p)
{
   checkedOutBy = p;
}

/********************************************************
 * Description: gets requested by
 *******************************************************/

Patron* Book::getRequestedBy()
{
   return requestedBy;
}

/*********************************************************
 * Description: sets requested by
 *******************************************************/

void Book::setRequestedBy(Patron* p)
{
   requestedBy = p;
}

/********************************************************
 * Description: gets Checked out date
 *******************************************************/

int Book::getDateCheckedOut()
{
   return dateCheckedOut;
}

/********************************************************
 * Description: sets date checked out
 *******************************************************/

void Book::setDateCheckedOut(int date)
{
   dateCheckedOut = date;
}
