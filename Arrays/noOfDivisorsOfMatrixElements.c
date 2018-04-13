/*
Read a matrix with n lines and m columns having natural numbers as elements.
Replace each element in the matrix with his number of divisors.
*/

#include <stdio.h>
#include <stdlib.h>

int getNoOfDivisors(int num);
void printArray(int *arr[], int n, int m);

int main() {
	int m, n, i, j;
	printf("Please enter number of rows : ");
	scanf("%d", &n);
	printf("Please enter number of columns : ");
	scanf("%d", &m);

	int *arr[n];
	for(i=0; i<n; i++) 
		arr[i] = (int*)malloc(m*sizeof(int));

	puts("Please enter elements");
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d", &arr[i][j]);

	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			arr[i][j] = getNoOfDivisors(arr[i][j]);

	printArray(arr, n, m);

	return 0;
}

int getNoOfDivisors(int num) {
	int totalDiv=0, i;
	for(i=1; i<=num; i++)
		if(num%i==0)
			totalDiv++;
	return totalDiv;
}

void printArray(int *arr[], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) 
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}