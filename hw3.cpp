#include <iostream>
#include <cmath> 
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{
	int x, y;
	float v;
	const float z = 2.50; 

	cout << "Input value of x: ";	cin >> x; 
	cout << "Input value of y: ";	cin >> y; 
	
	switch (x) 
	{
		case 1: 
			if (1 < y < 5)
				{v = x * y * z; }
					else if (y >= 5)
					{v = x + (y / z);}
					break;
			
		case 2:
			if (y <= 5)
				{v = fabs((x - y) / z);}
					else if (y > 5)
					{v = x - sqrt(y + z);}
					break;
			
		default:
			v = x + y + z; 
			break;
	}
	
	cout << "The value for V is: " << v << fixed << setprecision(2) << endl;
	
	getch();
	return 0;
}
