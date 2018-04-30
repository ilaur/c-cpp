/*
Read a vector a with n elements. Eliminate all identical pair until there are none left.
Example: from vector 3 7 4 5 5 6 6 4 7 9 8 8 will remain only 3 and 9.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<n; i++) {
		if(a[i]==a[i+1]) {
			for(j=i; j<n; j++) {
				a[j] = a[j+2];
			}
			n-=2;
			i--;
			if(i>0)
				i--;
		}
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
}