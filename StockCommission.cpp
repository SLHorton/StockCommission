// StockCommission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables 
	float COMMISSION_PERCENT2 = .02, 
		shares_bought1 = 600,
		share_price1 = 21.77,
		total_paid1 = shares_bought1 * share_price1,
		total_commission1 = total_paid1 * COMMISSION_PERCENT2,
		total_amount_paid1 = total_commission1 + total_paid1;

	//print details with wording
	cout << endl;
	cout << "Kathryn bought ";
	cout << shares_bought1;
	cout << " shares of stock at the price of $";
	cout << share_price1 << " per share." << endl;
	cout << "She must pay her stock broker a ";
	cout << "2 percent commission for the transaction." << endl;
	cout << "This is how much she should expect to pay...";
	cout << endl; cout << endl;
		

	//print break down shares @ price
	cout << "-----------------------------------------\n";
	cout << shares_bought1 << " shares @ $" << share_price1 << endl;
	cout << "-----------------------------------------\n";

	//print results
	cout << endl << endl;
	cout << fixed;
	cout << setprecision(2);
	cout << "Total Stock Price: $";
	cout << total_paid1 << endl;
	cout << "Broker Commission : $";
	cout << total_commission1 << endl;
	cout << "Gross Total: $";
	cout << total_amount_paid1 << endl;
	cout << endl << endl;


	

	//declare variables
	float shares_bought, share_price, total_stock_price, total_commission, total_amount_paid, commission_percent;

	//ask user for input
	cout << "How many shares will you be buying? ";
	cin >> shares_bought; //store user input
	cout << "What is the price per share? $";
	cin >> share_price;
	cout << "What percentage will your broker be paid? ";
	cin >> commission_percent;
	cout << endl;
	
	//calculate results
	total_stock_price = shares_bought * share_price;
	total_commission = total_stock_price * (commission_percent/100);
	total_amount_paid = total_commission + total_stock_price;

	//print break down shares @ price
	cout << endl;
	cout << "-----------------------------------------\n";
	cout << shares_bought << " shares @ $" << share_price << endl;
	cout << "-----------------------------------------\n";
	// print results
	cout << endl;
	cout << fixed;
	cout << setprecision(2);
	cout << "Stock Cost: $ " << total_stock_price << endl;
	cout << "Broker Fee: $ " << total_commission << endl;
	cout << "Total Cost: $ " << total_amount_paid << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
