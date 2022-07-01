#include "Account.h"
using namespace std;
#include<string>

Account::Account(string firstName, string secondName, double balance, int accountId){
	this->firstName=firstName;
	this->secondName=secondName;
	this->balance=balance;
	this->accountId=accountId;
}
ostream & operator<<(ostream & o, Account & a){
	o<<a.accountId<<"\t"<<a.firstName << "\t"<<a.secondName<<"\t"<<a.balance<<"\t" << endl;
	return o;
}
ifstream & operator>>(ifstream & i, Account & a){
	i>>a.firstName;
	i>>a.secondName;
	i>>a.balance;
	i>>a.accountId;
	return i;
}
ofstream & operator<<(ofstream & o, Account & a){
	o<<a.firstName<<endl;
	o<<a.secondName<<endl;
	o<<a.balance<<endl;
	o<<a.accountId<<endl;
	return o;
}