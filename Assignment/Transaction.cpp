
//Ricardo Knight, Jodian Wong, Oshane Roberts

#include "Transaction.h"

using std::string;
using std::to_string;
using namespace std;
 
 int main()
 {
	Transaction::Transaction(double amt, string kind) : amount(amt), type(kind) {}
	
	string Transaction::TransactionReport() 
	{
		string report;
		report += "   ";
		report += type;
		report += "   ";
		report += to_string(amount);
	
		//Adding column to track balance after each transaction.
	
		return report;
	}
 };

