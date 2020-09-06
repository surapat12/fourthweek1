#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], i, j, x,m;
	printf("Enter the number(No more than 20) : ");
	scanf_s("%d", &m);
	if (m > 20)
	{
		printf("ERROR");
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			x = i - 1;
			a[x][j - 1] = i * j;

		}
	}
	printf("*    |");
	int n = 1;
	for (n = 1; n <= m; n++)
	{
		printf("\t%d", n);
	}
	printf("\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for (i = 0; i < m; i++)
	{
		printf("%d    |\t", i + 1);
		for (j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");

	}



	return 0;
}
