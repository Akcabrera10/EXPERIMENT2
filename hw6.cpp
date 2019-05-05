#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a = 0, b = 1, c, d = 2, e = 2 + 20; 

    cout << "Fibonacci numbers:\n";
	cout << a << ", " << b << ", ";
	
    for (d; d < e; d++) 
    	{
        	c = a + b;
        	a = b; 
        	b = c; 
			cout << c << ", ";
    	}
		
	getch();
	return 0;
}
