#include "test.h"

#include <iostream>;
using namespace std;
void hw()
{
	cout << "Hello World!" << "\n";
}

void Pythagore()
{
	int N1 = 1000;

	for(int a = 0; a<sqrt((double) N1); a++)
	{
		for(int b = 0; b <= a; b++)
		{
			int c = N1 - a - b;
			int d = a*a + b*b;
			if(c*c == d*d)
			{
				cout << "Nouveau triplet" << "\n";
				cout << a << "\n";
				cout << b << "\n";
				cout << c << "\n";
			}

		}
	}
	cout << "End";
}




