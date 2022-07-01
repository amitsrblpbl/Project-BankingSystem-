#include "Account.h"
#include "Bank.h"
#include <string>
#include<iostream>

using namespace std;
int Bank::accountNumber=0;
int main(){
	int choice;
	Bank b;
	bool loop=true;
	while(loop){
	cout << "Welcome to Bank \t" << endl
	     << "Press 1 to open account: \t" << endl
		 << "Press 2 to show account balance: \t" << endl
		 << "Press 3 to deposit ammount: \t" << endl
		 << "Press 4 to withdraw ammount: \t" << endl
		 << "Press 5 to close account: \t" << endl
		 << "Press 6 to show all accounts: \t" <<endl
		 << "Press 7 to quit: \t" << endl
		 << "Enter your choice: \t";
	
	cin >> choice;
	switch(choice){
		case 1:
		{
			string firstName, secondName;
			float balance;
			int accountId;
			cout << "Enter your FirstName: \t";
			cin >> firstName;
			cout << "Enter your SecondName: \t";
			cin >> secondName;
			cout << "Enter your opening Balance: \t";
			cin >> balance;
			accountId=++b.accountNumber;
			b.openAccount(firstName,secondName,balance, accountId);
			
		break;	
		}
		case 2:{
			int accountId;
			cout << "Enter the AccountId: \t";
            cin >> accountId;
            b.showBalance(accountId);	
			
			break;
		}
		case 3:{
			int accountId;
			float ammount;
			cout <<"Enter the AccountId: \t";
			cin >> accountId;
			cout << "Enter the ammount to deposit";
			cin >> ammount;
			b.deposit(accountId, ammount);
			break;
		}
		case 4:{
			int accountId;
			float ammount;
			cout <<"Enter the AccountId: \t";
			cin >> accountId;
			cout << "Enter the ammount to withdraw";
			cin >> ammount;
			b.withdraw(accountId, ammount);
			break;
		}
		case 5:{
			int accountId;
			
			cout <<"Enter the AccountId: \t";
			cin >> accountId;				
			b.close(accountId);
			break;
		}
		case 6:{
			b.showAccounts();
			break;
		}
		case 7:{
			loop=false;
			break;
		}
		default:{
			break;
		}
	}
	}
	return 0;
}