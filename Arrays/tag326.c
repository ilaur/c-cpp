/*
Read a vector with n natural elements starting from index 1.
Replace each element in the vector with the gratest power of the index that is less or equal to the element, except the first element of the vector.
Example: For the vector 23 24 43 90 80 results the vector 23 16 27 64 25
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fIn = fopen("fIn", "r");
	int n, i, p;
	fscanf(fIn, "%d", &n);
	int *a = (int*)malloc((n+1)*sizeof(int));
	for(i=1; i<=n; i++)
		fscanf(fIn, "%d", &a[i]);
	fclose(fIn);
	for(i=2; i<=n; i++) {
		p = 1;
		while(p<=a[i]) p*=i;
		a[i] = p/i;
	}
	for(i=1; i<=n; i++)
		printf("%d ", a[i]);
	free(a);
	puts("");
	return 0;
}