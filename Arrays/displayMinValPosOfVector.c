/*
Read a vector a with n elements of integer numbers.
Display the min value of the vector and its position.
Elements are numbered from 1 to n.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j = 0;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc((n+1)*sizeof(int));
	for(i=1; i<=n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	int min = a[1];
	for(i=2; i<=n; i++)
		if(min>a[i])
			min = a[i];
	printf("Min value : %d\n", min);
	printf("Positions : ");
	for(i=1; i<=n; i++)
		if(a[i]==min)
			printf("%d ", i);
	free(a);
	printf("\n");
	return 0;
}