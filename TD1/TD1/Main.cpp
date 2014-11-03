#include "Main.h";
#include <math.h>;
#include <iostream>;
using namespace std;

void main()

{
	/*int a =2;
	int b =3;

	int* pa = &a;
	int* pb = &a;
	double d = 3.3;
	double* pd = &d;
	*pa = 5;
	int c = *pb;
	cout << c << "\n" ;*/

	/*int a=2;
	Increment3(a);
	cout << a << "\n";*/

	/*hw();*/

	Pythagore();


}

bool IsOdd(int a)
{
	return a%2==1;
}


bool IsPrime(int a)
{
	for(int i = 2; i < sqrt ((double) a); i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}

	return true;
}

void print100prime()
{
	int i = 2;
	int compteur = 0;
	while(compteur<100)
	{
		if(IsPrime(i))
		{
			cout << i << "\n";
			compteur++;
		}
		i++;
	}

}

int Factorielle(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*Factorielle(n-1);
	}
}


void Increment3(int& n)
{
	n++;
}
