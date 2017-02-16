// BankStatement 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void summary(double a, double b, double  c, double d);

int main()
{
	double beginningBalance;
	double widthdrawl=0;
	double checks = 0;;
	double deposits = 0;;
	char continuation = 'a';
	double value;
	

	cout<< "Input your beginning balance"<<endl;
	cin>> beginningBalance;

	    while (continuation != 'n' && continuation != 'N')
	{
		cout << "Please input the type of transaction that you would like to do."<<endl;
		cout<<"(c) for check (w) for withdraw (d)for deposit or (n) for ending the session "<<endl;
		cin >> continuation ;

	    cout << "Please enter amount to be withdrawn, deposited or checked.";
	    cin >> value;
		
			
		    if (continuation == 'd' || continuation == 'D')
			{
				deposits += value;
			}
			else if (continuation == 'w' || continuation == 'W')
			{
				widthdrawl += value;
			}
			else if (continuation == 'c' || continuation == 'C')
			{
				checks += value;
			}
			else { cout << "If you are seeing this message you have either ended the session or input an invalid character for transaction" << endl; }
	}
	



    summary (beginningBalance, deposits, checks, widthdrawl);

	
	cout << "here is the summary press any button then enter to exit";
	cin >> continuation;

	return 0;
}

void summary(double a, double b, double  c,double d)
{
	double positive = a + b;
	double negative = c + d;
	double endingBalance = positive-negative;

	cout << " " << endl;
	cout << " Beginning Balance: " <<a<<endl;
	cout << " " << endl;
	cout << " Deposits: "  << b << endl;
	cout << " Checking: "<< c << endl;
	cout << " Widthdrawl: " << d<< endl;
	cout << " " << endl;
	cout << " Ending Balance: "<<endingBalance<< endl;
}
