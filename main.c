#include "rotation.h"

void T_triv(char * inputstr, int d, int n);
void T_juggle(char * inputstr, int d, int n);
void T_bw(char * string, int length, int d);
void T_rev(char * string, int d, int n);

int main()
{
	int n, d, i, select;
	clock_t first, end;
	double time1;

	scanf("%d", &n);
	srand(time(NULL));

	scanf("%d", &d);

	printf("1. trivial 2. juggling 3. bw 4. reverse\n");
//	scanf("%d", &select);

	char* arr = (char*)malloc(sizeof(char)*(n + 1));
	char inputchar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < n; i++)
	{
		arr[i] = inputchar[rand() % 51 + 1];
	}

	arr[n] = '\0';

//	if (select == 1)
	{
		first = clock();

		T_triv(arr, d, n);

		end = clock();

		time1 = (double)((double)(end - first) / CLOCKS_PER_SEC);
		printf("trivial 실행시간 : %lf\n", time1);
	}

//	if (select == 2)
	{
		first = clock();

		T_juggle(arr, d, n);

		end = clock();

		time1 = (double)((double)(end - first) / CLOCKS_PER_SEC);
		printf("juggling 실행 시간 : %lf\n", time1);
	//}
	
//	if (select == 3)
	{
		first = clock();

		T_bw(arr, n, d);

		end = clock();

		time1 = (double)((double)(end - first) / CLOCKS_PER_SEC);

		printf("bw 실행 시간 : %lf\n", time1);
	//}
	/*
	if (select == 3)
	{
		if (d < 0)
		{
			d *= -1;
			first = clock();

			T_bw(arr, d, n);

			end = clock();

			time1 = (double)((end - first) / CLOCKS_PER_SEC);
			printf("bw 실행 시간 : %lf\n", time1);
		}

		else if (d > 0)
		{
			first = clock();

			T_bw(arr, n - d, n);

			end = clock();

			time1 = (double)((end - first) / CLOCKS_PER_SEC);
			printf("bw 실행 시간 : %lf\n", time1);
		}
	}
	*/
//	if (select == 4)
	{
		first = clock();

		T_rev(arr, d, n);

		end = clock();

		time1 = (double)((double)(end - first) / CLOCKS_PER_SEC);
		printf("reverse 실행시간 : %lf\n", time1);
	//}

	return 0;
}
			


