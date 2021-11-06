
//Ricardo Knight, Jodian Wong, Oshane Roberts
#pragma once
#include <string>
#include "Accounts.h"


//********Transaction class*************
class Transaction
	
{
	void Accounts::valuesetter(float ib, float f)
{
	initialBal = ib;
	fee = f;
}


void Accounts::usermenu()
 {

	while (num != 0) 
	{	
		switch (num) 
		{

		case 1:functionGetBalance();
			cout << "\n Current account balance =>$ " << initialBal << endl;
			transaction_fee();
			data();
			break;

		case 2:cout << "\n Enter withdrawal amount =>$ ";
			cin >> y;
			functionAvailableBL();
			if (iswithdrawal(y) == 1) {
				functionDebit();
				cout << "\n Current balance =>$ " << initialBal;
				transaction_fee();
				data();
			}
			else {
				cout << "\n Transaction Failed";
				functionAvailableBL();
				cout << "\n Available balance =>$ " << available;
			}break;

		case 3:cout << "\n Enter deposit amount =>$ ";
			cin >> x;
			functionCredit();
			calculate_int();
			cout << "\n Your interest value =>$ " << interest_value;
			initialBal = initialBal + interest_value;
			data();
			cout << "\n Current balance =>$ " << initialBal << endl; break;

		default:cout << "\n Invalid option";
		}

	}
	cout << "\n Thank you for banking with us" << endl;
}

//***************************************************************
//    	FUNCTIONS
//****************************************************************

	void Accounts::functionGetBalance() 
		{
			initialBal;
		}
	void Accounts::functionAvailableBL()
		{
			available = initialBal - 1000;
		}
	void Accounts::functionDebit()
		{
			initialBal = initialBal - y;
	   	}
	void Accounts::functionCredit() 
		{
		initialBal = initialBal + x;
		}
	void Accounts::calculate_int() 
		{
		interest_value = interest_rate * initialBal;
		}
	void Accounts::transaction_fee()
		{
		initialBal = initialBal - fee;
		}
};





