#ifndef Account_H

#define Account_H
#include<string>
#include<fstream>
using namespace std;
class Account{
	public:
	string firstName;
	string secondName;
	int accountId;
	double balance;
	Account(){};
	
	Account(string firstName, string secondName, double balance,int accountId);
	friend ostream & operator<<(ostream & o, Account & a);
	friend ifstream & operator>>(ifstream & i, Account & a);
	friend ofstream & operator<<(ofstream & o, Account & a);
};

#endif