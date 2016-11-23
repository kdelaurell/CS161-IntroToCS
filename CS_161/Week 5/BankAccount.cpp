/*************************************
 * Author: Kyle De Laurell
 * Date: 10/28/2015
 * Description: BankAccount.cpp is the
 * BankAccount class function
 * implementation file.
 ************************************/

#include "BankAccount.hpp"
using namespace std;
/*****************************************************
 *                BankAccount::BankAccount
 * This is the constructor function for BankAccount.
 * It initializes the variables.
 ****************************************************/
BankAccount::BankAccount()
{
   customerName = "Kyle De Laurell";
   customerID = "09";
   customerBalance = 0;
}

/*****************************************************
 *                BankAccount::getCustomerName
 * This function gets and returns the Customers Name
 ****************************************************/
string BankAccount::getCustomerName()
{
   return customerName;
}

/*****************************************************
 *                 BankAccount::getCustomerID
 * This function gets and returns the Customers ID
 ****************************************************/
string BankAccount::getCustomerID()
{
   return customerID;
}

/******************************************************
 *                  BankAccount::getCustomerBalance
 * This function gets and returns the Customers Balance
 *****************************************************/

double BankAccount::getCustomerBalance()
{
   return customerBalance;
}

/*******************************************************
 *                   BankAccount::withdraw
 * This function withdraws a double from the customers 
 * balance.
 *******************************************************/

void BankAccount::withdraw(double amountW)
{
   customerBalance -= amountW;
}

/*******************************************************
 *                   BankAccount::deposit
 * This function deposits a double into the customers
 * balance.
 ******************************************************/

void BankAccount::deposit(double amountD)
{
   customerBalance += amountD;
}
