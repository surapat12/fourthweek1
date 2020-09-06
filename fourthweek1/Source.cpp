#include<stdio.h>
#include<conio.h>
int main()
{
	int a[9][9], i, j,x;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			x = i - 1;
			a[x][j - 1] = i * j;

		}
	}
	printf("*    |\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("---------------------------------------------------------------------------\n");
	for (i = 0; i <9; i++)
	{
		printf("%d    |\t", i+1);
		for (j = 0; j <9; j++)
		{
			printf("%d\t", a[i][j]);
			
		}
		printf("\n");

	}
	


	return 0;
}