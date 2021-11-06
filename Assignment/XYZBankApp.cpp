
//Ricardo Knight, Jodian Wong, Oshane Roberts

#include <iostream>
#include "Accounts.h"
#include <fstream>

//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************
int main()
{
    //*********initializing Account********************
    Accounts Account1;

    Account1.Deposit(5000);
    Account1.Withdraw(1000);


    //Printing the report for Account 1
    for (auto rep : Account1.Report()) {

        std::cout << rep << std::endl;

    }

};

