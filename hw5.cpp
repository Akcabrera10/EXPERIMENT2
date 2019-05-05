
#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int start;
	cout << "Counting...\n";

	for (start = 1; start < 10; start++)
		{cout << start << ", ";}
	
	for (start = 10; start < 31, start <= 30; start+=2) 
		{cout << start << ", ";}
	
	_getch();
	return 0;
}
