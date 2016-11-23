/*****************************************************
 * Author: Kyle De Laurell
 * Date: 11/29/2015
 * Description: This is the Library class implementation
 * file.
 ****************************************************/
#include "Library.hpp"
#include "Book.hpp"
#include "Patron.hpp"
#include <string>
/*****************************************************
 * Description: This is the Library class default
 * constructor.
 ****************************************************/
Library::Library()
{
   currentDate = 0;
}
/*****************************************************
 * Description: This adds a book to the Librarys 
 * holdings.
 ****************************************************/
void Library::addBook(Book* b)
{
   holdings.push_back(b);
}
/*****************************************************
 * Description: This adds a patron to the Librarys 
 * members.
 ****************************************************/
void Library::addPatron(Patron* p)
{
   members.push_back(p);
}
/*****************************************************
 * Description: This checks out a library holdings to
 * a member.
 ****************************************************/
std::string Library::checkOutBook(std::string pID, std::string bID)
{
   int holdSize = holdings.size();
   int memberSize = members.size();
   int index;
   bool foundHolding = false;
   bool foundMember = false;
   bool onHold = false;
   Patron* holdMember;
   std::string holdMemberID;
   int holdingIndex;
   int memberIndex;
   for(index = 0; index < holdSize; index++)
   {
      if(bID == holdings.at(index)->getIdCode())
         {
         foundHolding = true;
         holdingIndex = index;
         if (holdings.at(index)->getRequestedBy() != 0)
            {
            onHold = true;
            holdMember = holdings.at(index)->getRequestedBy();
            holdMemberID = holdMember->getIdNum();
            }
         }
   }
   for(index = 0; index < memberSize; index++)
      {
      if(pID == members.at(index)->getIdNum())
         {
         foundMember = true;
         memberIndex = index;
         }
      }
   
   if(foundHolding)
      {
      if(foundMember)
         {
         if(holdings.at(holdingIndex)->getLocation() == 2)
            return "book already checked out";
         else if(holdings.at(holdingIndex)->getLocation() == 1)
            {
            if(holdMemberID == pID)
               {
               holdings.at(holdingIndex)->setCheckedOutBy((members.at(memberIndex))            );
               holdings.at(holdingIndex)->setLocation(CHECKED_OUT);
               holdings.at(holdingIndex)->setDateCheckedOut(currentDate);
               members.at(memberIndex)->addBook((holdings.at(holdingIndex)));
               if(holdings.at(holdingIndex)->getRequestedBy() == members.at(memberIndex))
                  holdings.at(holdingIndex)->setRequestedBy(NULL);
               return "check out successful";
               }
            else
               return "book on hold by other patron";
            }
         else
            {
            holdings.at(holdingIndex)->setCheckedOutBy((members.at(memberIndex))            );
            holdings.at(holdingIndex)->setLocation(CHECKED_OUT);
            holdings.at(holdingIndex)->setDateCheckedOut(currentDate);
            members.at(memberIndex)->addBook((holdings.at(holdingIndex)));
            //if(holdings.at(holdingIndex)->getRequestedBy() == members.at(memberIndex))
            //   holdings.at(holdingIndex)->setRequestedBy(NULL);
            return "check out successful";
            }
         }
      else
         {
         return "patron not found";
         }
      }
   else
      {
      return "book not found";
      }
}
/*****************************************************
 * Description: This returns a book to the library.
 ****************************************************/
std::string Library::returnBook(std::string bID)
{
   int holdSize = holdings.size();
   int index;
   bool foundHolding = false;
   bool holdingCheckedOut = false;
   bool holdingRequested = false;
   int holdingIndex;
   Patron* returnMember;
   for(index = 0; index < holdSize; index++)
   {
      if(bID == holdings.at(index)->getIdCode())
         {
         foundHolding = true;
         holdingIndex = index;
         if(holdings.at(index)->getLocation() == 2)
            {
            holdingCheckedOut = true;
            returnMember = holdings.at(index)->getCheckedOutBy();
            if(holdings.at(index)->getRequestedBy() != NULL)
               holdingRequested = true;
            }
         }
   }
   if(foundHolding)
      {
      if(holdingCheckedOut)
         {
         returnMember->removeBook(holdings.at(holdingIndex));
         if(holdingRequested)
            holdings.at(holdingIndex)->setLocation(ON_HOLD_SHELF);
         else
            holdings.at(holdingIndex)->setLocation(ON_SHELF);
         holdings.at(holdingIndex)->setCheckedOutBy(NULL);
         return "return successful";      
         }
      else
         {
         return "book already in library";
         }
      }
   else
      {
      return "book not found";
      }
   
}
/*****************************************************
 * Description: This requests a holding for a member.
 ****************************************************/
std::string Library::requestBook(std::string pID, std::string bID)
{
   int holdSize = holdings.size();
   int memberSize = members.size();
   int index;
   bool foundHolding = false;
   bool foundMember = false;
   bool onHold = false;
   int holdingIndex;
   int memberIndex;
   for(index = 0; index < holdSize; index++)
   {
      if(bID == holdings.at(index)->getIdCode())
         {
         foundHolding = true;
         holdingIndex = index;
         if(holdings.at(index)->getRequestedBy() != 0)
            {
            onHold = true;
            }
         }
   }
   for(index = 0; index < memberSize; index++)
      {
      if(pID == members.at(index)->getIdNum())
         {
         foundMember = true;
         memberIndex = index;
         }
      }
   if(foundHolding)
      {
      if(foundMember)
         {
         if(!onHold)
            {
            holdings.at(holdingIndex)->setRequestedBy(members.at(memberIndex));
            if(holdings.at(holdingIndex)->getLocation() == 0)
               holdings.at(holdingIndex)->setLocation(ON_HOLD_SHELF);
            return "request successful";
            }
         else
            {
            return "book already on hold";
            }   
         }
      else
         return "patron not found";
      }
   else
      {
         return "book not found";
      }
}
/*****************************************************
 * Description: This reduces the members fine Amount
 * based on how much they pay.
 ****************************************************/
std::string Library::payFine(std::string pID, double payment)
{
   if(getPatron(pID) != 0)
      {
      getPatron(pID)->amendFine(-payment);
      return "payment successful";
      }
   else
      return "patron not found";
}
/*****************************************************
 * Description: This increments the current date and 
 * adds fines to members who have overdue holdings.
 ****************************************************/
void Library::incrementCurrentDate()
{
   int holdingsSize = holdings.size();
   int index;
   int cOD; //checked out date
   int MAX_COD;
   Patron* patronCO;
   currentDate++;
      
   for(index = 0; index < holdingsSize; index++)
      {
      if(holdings.at(index)->getLocation() == 2)
         {
         cOD = holdings.at(index)->getDateCheckedOut();
         MAX_COD = holdings.at(index)->getCheckOutLength();
         patronCO = holdings.at(index)->getCheckedOutBy();
         if((currentDate - cOD) > MAX_COD)
            {
            patronCO->amendFine(0.10);
            }
         }
      }
   
}
/*****************************************************
 * Description: This gets the Patron Pointer for a 
 * Patron Id.
 ****************************************************/
Patron* Library::getPatron(std::string pID)
{
   int index;
   int memberSize = members.size();
   for(index = 0; index < memberSize; index++)
      {
      if(pID == members.at(index)->getIdNum())
         return members.at(index);
      }
}
/*****************************************************
 * Description: This get a Book pointer for a Book ID.
 ****************************************************/
Book* Library::getBook(std::string bID)
{
   int holdSize = holdings.size();
   int index;
   for(index = 0; index < holdSize; index++)
   {
      if(bID == holdings.at(index)->getIdCode())
         return holdings.at(index);
   }
}
