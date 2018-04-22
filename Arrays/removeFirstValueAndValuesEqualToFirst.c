/*
Read a vector a with n integer numbers.
Delete the first element and all elements equal to the firsts value.
Display the resulting vector.
Example: 
n=6 vector 3 4 5 3 3 6
display 4 5 6
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, firstVal, countVal = 0, j = 0;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	firstVal = a[0];
	for(i=0; i<n; i++)
		if(a[i]==firstVal)
			countVal++;
	int *b = (int*)malloc((n-countVal)*sizeof(int));
	for(i=0; i<n; i++)
		if(a[i]!=firstVal)
			b[j++] = a[i];
	free(a);
	for(i=0; i<j; i++)
		printf("%d ", b[i]);
	free(b);
	printf("\n");
	return 0;
}