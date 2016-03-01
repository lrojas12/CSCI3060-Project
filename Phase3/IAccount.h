/* 
 * IAccount.h
 * 
 * Authors: Denesh Parthipan, Luisa Rojas, Truyen Truong
 */

#ifndef IACCOUNT_H
#define IACCOUNT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * IAccount has the functions which are functions that can be
 * used for either the standard account or the administrator
 * account. This is an interface, therefore must be implemented.
 */
class IAccount {
 public:
  virtual ~IAccount() {}
  // Interface for withdrawal function.
  virtual void Withdrawal(int acc_num, float amount) = 0;
  // Interface for transfer function.
  virtual void Transfer(int acc_num_f, int acc_num_t, float amount) = 0;
  // Interface for paybill function.
  virtual void Paybill(int acc_num, string company, float amount) = 0;
  // Interface for deposit function
  virtual void Deposit(int acc_num, float amount) = 0;
};

#endif