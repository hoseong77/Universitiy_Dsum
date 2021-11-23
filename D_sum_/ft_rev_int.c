/*#include<stdio.h>

void ft_rev_int(int* arr, int size);

int main(void) {
	int b,c;
	printf("Å©±â : ");
	scanf_s("%d", &b);

	int arr[128] = { 0, };

	printf("\n°ª : ");
	
	for (int k = 0; k < b; k++){
		scanf_s("%d", &c);
		arr[k]=c;
	}

	ft_rev_int(arr, b);

	for(int j=0;j<b;j++)
		printf("%d ", arr[j]);
}

void ft_rev_int(int* arr, int size)
{
	int a=0;
	for (int i = 0; i < size-1-i; i++) {
		a = *(arr + i);
		*(arr + i) = *(arr +size-1- i);
		*(arr +size-1- i) = a;
	}

}
*/