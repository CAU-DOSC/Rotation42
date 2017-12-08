#include "rotation.h"

void T_triv(char * inputstr, int d, int n);
void T_juggle(char * inputstr, int d, int n);
void T_bw(char * string, int length, int d);
void T_rev(char * string, int d, int n);

int main()
{
	int n[3], d[3], i, j;
	clock_t first, end;
	double time_triv[3], time_jug[3], time_bw[3], time_rev[3];
	for (j = 0; j < 3; j++)
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

			T_triv(arr, d, n);

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

	for (j=0; j<3; j++)
	{
		printf("%d \t %d \t \t \t %lf \t %lf \t %lf \t %lf \n", n[j], d[j], time_triv[j], time_jug[j], time_bw[j], time_rev[j]);
	}

	return 0;
}