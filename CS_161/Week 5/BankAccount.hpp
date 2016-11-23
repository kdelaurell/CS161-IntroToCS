/*************************************************
 * Author: Kyle De Laurell
 * Date: 10/28/2015
 * Description: BankAccount.hpp is the BankAccount
 * class specification file.
 ************************************************/
#ifndef BankAccount_HPP
#define BankAccount_HPP
#include <string>
//defines the class BankAccount
class BankAccount
{
   private:
      std::string customerName;
      std::string customerID;
      double customerBalance;

   public:
      std::string getCustomerName();
      std::string getCustomerID();
      double getCustomerBalance();
      void withdraw(double);
      void deposit(double);
      BankAccount();
};

#endif
