#include <stdio.h>
#include <conio.h>


void nhapMT(int* arr, int m, int n);
void tongMT(int* a, int* b, int* c, int m, int n);
void inMT(int* arr, int m, int n);

int main(void)
{
  int m, n, mt1[100][100], mt2[100][100], mt3[100][100];
	int* a, *b, *c;
	a = (int*) mt1;
	b = (int*) mt2;
	c = (int*) mt3;
	m = 2; n = 3;
	
	nhapMT(a, m, n);
	nhapMT(b, m, n);
	tongMT(a, b, c, m, n);
	
	inMT(c, m, n);
	
	getch();
	return 0;
}

void nhapMT(int* MT, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("MT[%d,%d]= ", i, j);
			scanf("%d", (MT + i*n + j));
		}
	
	}
}

void tongMT(int* a, int* b, int* c, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			*(c + i*n + j) = *(b + i*n + j) + *(a + i*n + j);
	
	}
}

void inMT(int* MT, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%4d", *(MT + i*n + j));
		printf("\n");
	}
}
