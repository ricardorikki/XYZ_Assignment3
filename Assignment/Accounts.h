//Ricardo Knight, Jodian Wong, Oshane Roberts

#pragma once
#include <string>
#include <vector>
#include "Transaction.h"
#include <iostream>
using namespace std;


//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************


class Accounts
 { 
 
		protected:
		
		double interest_rate = 0.10;
		float fee =50.00;
		float interest_value;
		float initialBal;
		fstream st;
		double balance;
		std::vector<Transaction> log;
	
		private:
		float available;
		float y;
		float x;
		int num;
		float ib;
		float f;
	
	public:
	Accounts() 
	{
		//*********************User Menu************************
		cout << " Enter initial balance: $ ";
		cin >> initialBal;
		if (initialBal < 1000) 
			{
				cout << "\n Insufficient funds for transaction. \n\n Your account balance is :$0.00" << endl;
			}
		else 
		{
		  cout<<"\n________________________________________"<<endl;
		 	cout<<"|         WELCOME TO XYZ BANK          |"<<endl;
		 	cout<<"|______________________________________|"<<endl;
		 	cout<<"|  Please Select an Option to Continue.|"<<endl;
		 	cout<<"|    Press 1 to Check Account Balance  |"<<endl;
		 	cout<<"|    Press 2 for Withdrawal            |"<<endl;
		 	cout<<"|    Press 3 for Deposit               |"<<endl;
		 	cout<<"|    Press 0 to Exit                   |"<<endl;
		 	cout<<"|______________________________________|"<<endl;
		 
		 cin >> num;	
		}
		usermenu();
	
	}

	//****************Functions**************************
	void savings_acc() 
		{
			interest_rate = 0.10;
			interest_value;
			initialBal;
		}

	void checking_acc() 
		{
			initialBal = ib;
			fee = f;
		}
		void usermenu();
		bool iswithdrawal(float y);
		void functionGetBalance();
		void functionDebit();
		void functionAvailableBL();
		void functionCredit();
		void calculate_int();
		void transaction_fee();
		void valuesetter(float, float);
		void data();
		
		
		std::vector<std::string> Report();
	
		bool Withdraw(double amount);
	
		bool Deposit(double amount);
	
		double GetBalance() { return balance; }

};

//****************Inheritance Interest******************
class savings_acc :public Accounts  
	{
		public:
	
		void calculate_int() 
		{
			interest_value = interest_rate * initialBal;
		}
	};

//*****************Inheritance fees*********************
class checking_acc :public Accounts 
{
		public:

		void valuesetter(float ib, float f) 
		{
			initialBal = ib;
			fee = f;
		}
	void transaction_fee() 
	{
		initialBal = initialBal - fee;
	}

};
	
	
	
	
	
	


