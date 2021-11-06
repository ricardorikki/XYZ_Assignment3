//Ricardo Knight, Jodian Wong, Oshane Roberts

#include "Accounts.h"
#include <fstream>
#include <iostream>

using std::vector;
using std::string;
using std::to_string;


Accounts::Accounts() : balance(0) {}

std::vector<std::string> Accounts::Report() 
{

	std::vector<std::string> report;

	report.push_back("Balance is " + std::to_string(balance));
	report.push_back("Transactions: ");

	for (auto r : log) {
		
		report.push_back(r.TransactionReport());
	}

	report.push_back("-------------------------------");

	//write the values to a file
	std::ofstream output_file("./Customerdata.txt");
	std::ostream_iterator<std::string> output_iterator(output_file, "\n");

	try {
		std::copy(report.begin(), report.end(), output_iterator);
	}
	catch (int e) {
		std::cout << "An exception occurred. Exception Nr. " << e << '\n';
	}
	

	return report;
}


bool Accounts::Deposit(double amount) 
{

	if (amount >= 0)
	 {
		
		balance += amount;
		log.push_back(Transaction(amount, "Deposit"));
		return true;
	}
	else 
	{
		return false;
	}
}

bool Accounts::Withdraw(double amount)
 {

	if (amount <= 0) 
	{	
		return false;
	}
	if (balance >= amount) 
	{

		balance -= amount;
		log.push_back(Transaction(amount, "Withdrawal"));
		return true;
	}
}
