
#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	double gal, prevMonth, waterBill;
	const double demand = 35, consump = 1.1; 

	cout << "This program computes your water bill by inputting the following: ";
	cout << "\nInput unpaid amount from the previous month (input 0 if none): "; cin >> prevMonth; 
	cout << "Input gallons consumed in the current month: "; cin >>	gal;

	if (prevMonth > 0) 
	{
		waterBill = demand + (consump * gal) + prevMonth + 20;
   		cout << "The amount of your water bill is:  " << waterBill << endl;
	}
	
    else if (prevMonth = 0)
    {
    	waterBill = demand + (consump * gal);
		cout << "Your water bill costs:  " << waterBill << endl;	
	}
	
	else
		cout << "\n\n----------------------Input invalid!----------------------";

	getch();
	return 0;
}
