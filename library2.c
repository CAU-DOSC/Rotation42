#include "rotation.h"

void reverseArray(char array[], int start, int end)
{
	int i, temp, temp_start, temp_end;
	if (start == 0)
	{
		for (i = start; i <= (end / 2); i++)
		{
			temp = array[i];
			array[i] = array[end - i];
			array[end - i] = temp;
		}
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

