#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	double a, b, c;
	cout << "This program will accept three numbers as input and display the LARGEST number of the three.\n";
	cout << "\nEnter first number: ";	cin >> a; 
	cout << "Enter second number: ";	cin >> b; 	
	cout << "Enter third number: ";	cin >> c; 	
	
	if (a >= b && a >= c)
			cout << "\nThe LARGEST of the three numbers is " << a << endl;
	
	else if (b >= a && b >= c)
			cout << "\nThe LARGEST of the three numbers is " << b << endl;
			
	else if (a == b && b == c)
			cout << "\nThe numbers entered are all equal." << endl;
	
	else
			cout << "\nThe LARGEST of the three numbers is " << c << endl;
	 
		

	getch();
	return 0;
	
}
