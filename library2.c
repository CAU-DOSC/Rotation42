#include "rotation.h"

void swap(char arr[], int i1, int i2, int d)
{
	for (int i = 0; i<d; ++i)
	{
		char temp = arr[i1 + i];
		arr[i1 + i] = arr[i2 + i];
		arr[i2 + i] = temp;
	}
}

int GCD(int a, int b)
{
	int i;
	int gcd = 1;
	for (i = 2; i <= (a > b ? b : a); i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	return gcd;
}
