#include "rotation.h"

char * T_triv(char * inputstr, int d, int n);
char * T_juggle(char * inputstr, int d, int n);
char * T_bw(char * string, int length, int d);
char * T_rev(char * inputstr, int d, int n);

int main()
{
	int n[5], d[5], i, j;
	clock_t first, end;
	double time_triv[5], time_jug[5], time_bw[5], time_rev[5];
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &n[j]);
		srand(time(NULL));

		scanf("%d", &d[j]);


		char* arr = (char*)malloc(sizeof(char)*(n[j] + 1));
		char inputchar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		for (i = 0; i < n[j]; i++)
		{
			arr[i] = inputchar[rand() % 51 + 1];
		}

		arr[n[j]] = '\0';

		//	trivial
		
			first = clock();

			T_triv(arr, d[j], n[j]);

			end = clock();

			time_triv[j] = (double)((double)(end - first) / CLOCKS_PER_SEC);
		
		//	juggling
		
			first = clock();

			T_juggle(arr, d[j], n[j]);

			end = clock();

			time_jug[j] = (double)((double)(end - first) / CLOCKS_PER_SEC);
		

		//	block swap
	
			first = clock();

			T_bw(arr, n[j], d[j]);

			end = clock();

			time_bw[j] = (double)((double)(end - first) / CLOCKS_PER_SEC);
		
		// reverse	
			first = clock();

			T_rev(arr, d[j], n[j]);

			end = clock();

			time_rev[j] = (double)((double)(end - first) / CLOCKS_PER_SEC);
	}
	
	printf("STRLength \t ROTATEdistance \t T.trivial \t T.juggle \t T.bw \t \t T.reverse \n");

	for (j=0; j<5; j++)
	{
		printf("%d \t %d \t \t \t %lf \t %lf \t %lf \t %lf \n", n[j], d[j], time_triv[j], time_jug[j], time_bw[j], time_rev[j]);
	}

	return 0;
}