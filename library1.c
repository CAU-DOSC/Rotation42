#include "rotation.h"

char T_triv(char * inputstr, int d, int n)
{
	int i, j;
	char temp;


	if (d < 0)
	{
		d *= -1;
		for (j = 0; j < d; j++)
		{
			temp = inputstr[0];

			for (i = 0; i < n - 1; i++)
			{
				inputstr[i] = inputstr[i + 1];
			}
			inputstr[n - 1] = temp;
		}
	}

	if (d > 0)
	{
		for (j = 0; j < d; j++)
		{
			temp = inputstr[n - 1];
			for (i = n - 1; i >= 1; i--)
			{
				inputstr[i] = inputstr[i - 1];
			}
			inputstr[0] = temp;
		}
	}
}

void T_juggle(char * inputstr, int d, int n)
{
	int h, i, j, k, l, gcd, temp, da;



	while (d>n)
		d -= n;
	if (d<0)
	{
		da = 0 - d;
		gcd = GCD(n, da);
		k = n / gcd;
		l = da / gcd;
	}
	else
	{
		gcd = GCD(n, d);
		k = n / gcd;
		l = d / gcd;
	}

	if (d<0)
	{
		for (i = 0; i<gcd; i++)
		{
			for (h = 0; h<l; h++)
			{
				temp = *(inputstr + i);
				for (j = 0; j<k - 1; j++)
				{
					*(inputstr + i + gcd * j) = *(inputstr + i + gcd * (j + 1));
				}
				*(inputstr + i + gcd * (k - 1)) = temp;
			}
		}
	}
	else
	{
		for (i = 0; i<gcd; i++)
		{
			for (h = 0; h<l; h++)
			{
				temp = *(inputstr + i + gcd * (k - 1));
				for (j = k - 2; j >= 0; j--)
				{
					*(inputstr + i + gcd * (j + 1)) = *(inputstr + i + gcd * j);
				}
				*(inputstr + i) = temp;
			}
		}
	}
}

void T_bw(char * string, int length, int d)
{
	char temp;

	while (d <= 0)
		d = length + d;

	if (d == length)
		exit(0);
int i;
	if (d < length - d)
	{
		for (i = 0; i < d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + length - d + i);
			*(string + length - d + i) = temp;
		}
		
		T_bw(string, length - d, d);
	}

	else if (d == length - d)
	{
		for (i = 0; i < d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + length - d + i);
			*(string + length - d + i) = temp;
		}
	}

	else
	{
		for (i = 0; i < length - d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + i + d);
			*(string + i + d) = temp;
		}

		T_bw(string + length - d, d, 2 * d - length);
	}
}

void T_rev(char *inputstr, int d, int n)
{
	if (d > 0)
	{
		reverseArray(inputstr, n - d, n - 1);
		reverseArray(inputstr, 0, n - d - 1);
		reverseArray(inputstr, 0, n - 1);
	}

	else if (d < 0)
	{
		d = d*(-1);
		reverseArray(inputstr, 0, d-1);
		reverseArray(inputstr, d, n - 1);
		reverseArray(inputstr, 0, n - 1);
	}
}

