/*
 *Bai 1
 */
 
#include <stdio.h>
#include <conio.h>

void nhapmang(int* arr, int arr_size);
void sxmang(int* arr, int arr_size);
void inmang(int* arr, int arr_size);

int main(void)
{
	int n, arr[100];
	
	printf("So phan tu: ");
	scanf("%d", &n);
	
	nhapmang(arr, n);
	printf("Chua sxep : ");
	inmang(arr, n);
	printf("Da sxep: ");
	sxmang(arr, n);
	inmang(arr, n);
	
	
	getch();
	return 0;
}

void nhapmang(int* arr, int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
			scanf("%d", &arr[i]);
}

void sxmang(int* arr, int arr_size)
{
	int i, j;
	for (i = 0; i < arr_size; i++)
	{
		for (j = i + 1; j < arr_size; j++)
			if (arr[i] > arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}		
	
	}
}

void inmang(int* arr, int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
		printf("%4d", arr[i]);
	printf("\n");
}

