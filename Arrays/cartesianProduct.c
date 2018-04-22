/*
From ab.in file read 2 numbers n and m, then elements of 2 sets
a with n elements and b with m elements.
Display the cartesian product of the 2 sets.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL;
	pIn = fopen("ab.in", "r");
	int n, m, i, j;
	fscanf(pIn, "%d %d", &n, &m);
	int *a = (int*)malloc(n*sizeof(int));
	int *b = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	for(i=0; i<m; i++)
		fscanf(pIn, "%d", &b[i]);
	fclose(pIn);
	puts("Cartesian product of the two sets : ");
	printf("{");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("(%d, %d), ", a[i], b[j]);
		}
	}
	free(a);
	free(b);
	printf("}\n");
	return 0;
}