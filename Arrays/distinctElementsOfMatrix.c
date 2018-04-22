/*
From the m.in file read two numbers n and m, then a matrix a with n rows and m columns, integer elements.
Determine if all the elements from the matrix are distinct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	FILE *pIn = NULL;
	pIn = fopen("m.in", "r");
	int n, m, i, j, k, l;
	fscanf(pIn, "%d %d", &n, &m);
	int **a = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		a[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &a[i][j]);
	fclose(pIn);
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			for(k=0; k<n; k++) {
				for(l=0; l<m; l++) {
					if(i==k && j==l)
						continue;
					if(a[i][j]==a[k][l]) {
						printf("Matrix doesn't have all elements distinct\n");
						for(i=0; i<n; i++)
							free(a[i]);
						free(a);
						return 0;
					}
				}
			}
		}
	}
	printf("Matrix has all elements distinct\n");
	for(i=0; i<n; i++)
		free(a[i]);
	free(a);
	return 0;
}