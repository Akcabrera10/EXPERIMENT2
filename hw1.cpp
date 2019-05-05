
#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int hoursUsed, packageCost;
    char packageInput;
    
	cout << "This program computes your monthly internet bill by inputting the number of hours used.\n";
	cout << "Please enter your internet bill package (A, B, or C):  ";	cin >> packageInput;
   	cout << "Input number of hours used:  "; cin >> hoursUsed;
	
	switch(packageInput)
				{
					case 'A':
					case 'a':
						if (hoursUsed <= 10) 
						packageCost = 995;
						else
						packageCost = 995 + (hoursUsed - 10) * 20; 
						break;
						
					case 'B':
					case 'b':
						if (hoursUsed <= 20) 
						packageCost = 1495;
						else
						packageCost = 1495 + (hoursUsed - 20) * 10; 
						break;
						
					case 'C':
					case 'c':
						packageCost = 1995; 
						break;
						
					default: cout << "\n\n--------------------Input invalid!--------------------\n";
					packageCost = 0;
		 			break;
		 			
					
				}
				
				cout << "\n\nTotal amount due: " << packageCost << endl;
		
    getch();
    return 0;
    
}
