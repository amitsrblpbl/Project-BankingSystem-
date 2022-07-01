#include "Bank.h"
#include "Account.h"
#include<string>
#include<iostream>
#include <fstream>
using namespace std;
 Bank::Bank(){
	 Account a;
	ifstream ifs("D:\\Learning\\c++\\Project-BankingSystem\\data\\Accounts.txt");
	if(ifs){
		while(ifs.peek()!=EOF){
		ifs>>a;
		bank.insert(pair<int,Account>(a.accountId,a));
		}
		accountNumber=a.accountId;
		
	}
   else{
	   
   }
	ifs.close();
}
void Bank::openAccount(string firstName, string secondName, double balance, int accountId){
	Account a(firstName, secondName, balance, accountId);
	cout <<"Congrats, your account ID is : "<<a.accountId << endl;
	bank.insert(pair<int,Account>(a.accountId,a));
	ofstream ofs("D:\\Learning\\c++\\Project-BankingSystem\\data\\Accounts.txt",ios::trunc);
	map<int,Account>::iterator itr;
	for(itr=bank.begin();itr!=bank.end();++itr){
		ofs<<itr->second;
	}
	ofs.close();
	
}
void Bank::showAccounts(){
	map<int,Account>::iterator itr;
	for(itr=bank.begin();itr!=bank.end();++itr){
		//cout << itr->first<<"\t" << itr->second.firstName<<"\t"<<itr->second.secondName<<"\t"<<itr->second.balance<<endl;
		//write function for object operator overload
		cout << itr->second << endl;
	}
}
void Bank::showBalance(int accountId){
	map<int,Account>::iterator itr;
	itr=bank.find(accountId);
	cout << itr->second;
}
void Bank::deposit(int accountId, float ammount){
	map<int,Account>::iterator itr;
	itr=bank.find(accountId);
	itr->second.balance+=ammount;
	cout << itr->second;
}
void Bank::withdraw(int accountId, float ammount){
	map<int,Account>::iterator itr;
	itr=bank.find(accountId);
	itr->second.balance-=ammount;
	cout << itr->second;
}
void Bank::close(int accountId ){
	map<int,Account>::iterator itr;	
	bank.erase(accountId);  	
	ofstream ofs("D:\\Learning\\c++\\Project-BankingSystem\\data\\Accounts.txt",ios::trunc);
	
	for(itr=bank.begin();itr!=bank.end();++itr){
		ofs<<itr->second;
	}
	ofs.close();
}