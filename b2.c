#include <stdio.h>
#include <conio.h>
typedef int matran[100][100];

void nhapMT(matran MT, int m, int n);
void MAXhang(matran MT, int* max, int m, int n);
void inMT(matran MT, int m, int n);

int main(void)
{
  	int i, m, n, max[100];
	matran MT;
	m = 3; n = 2;
	
	nhapMT(MT, m, n);
	MAXhang(MT, max, m, n);
	inMT(MT, m, n);
	printf("\n");
	
	for (i = 0; i < m; i ++)
		printf("%2d", max[i]);
		
	printf("\n");
	getch();
	return 0;
}

void nhapMT(matran MT, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("MT[%d,%d]= ", i, j);
			scanf("%d", &MT[i][j]);
		}
	
	}
}

void MAXhang(matran MT, int max[], int m, int n)
{
	int i, j;
	i = j = 0;
	for (i = 0; i < m; i++)
	{
		max[i] = MT[i][0]; 
		for (j = 0; j < n; j++)
			if (max[i] < MT[i][j])
				max[i] = MT[i][j];
	
	}
}

void inMT(matran MT, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%4d", MT[i][j]);
		printf("\n");
	}
}
