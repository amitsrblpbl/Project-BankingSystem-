#ifndef Bank_H
#define Bank_H
#include "account.h"
#include<map>
#include<string>
using namespace std;
class Bank{
	public:
	map<int , Account > bank;
	static int accountNumber;
	Bank();
	void openAccount(string firstName, string secondName, double balance, int accountId);
	void showAccounts();
	void showBalance(int accountId);
	void deposit(int accountId, float ammount);
	void withdraw(int accountId, float ammount);
	void close(int accountId);
};

#endif