#include <stdio.h>
#include <conio.h>


void nhapMT(int* arr, int m, int n);
void tichMT(int* a, int* b, int* c, int n);
void inMT(int* arr, int m, int n);

int main(void)
{
  int m, n, mt1[100][100], mt2[100][100], mt3[100][100];
	int* a, *b, *c;
	a = (int*) mt1;
	b = (int*) mt2;
	c = (int*) mt3;
	m = 2; n = 2;
	
	nhapMT(a, m, n);
	nhapMT(b, m, n);
	tichMT(a, b, c, n);
	
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

void tichMT(int* a, int* b, int* c, int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			*(c + i*n + j) = 0;
			for(k = 0; k < n; k++)
				*(c + i*n + j) += *(a + i*n + k) * (*(b + k*n + j));		
		}
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
