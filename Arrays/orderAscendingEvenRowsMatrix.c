/*
Read a matrix of n rows and m columns of integer elements.
Order even row's elements in asceinding order.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, m, i, j, k;
	fscanf(pIn, "%d %d", &n, &m);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	for(i=0; i<n; i++) {
		if(i%2!=0) {
			for(j=0; j<m; j++) {
				if(mat[i][j]%2==0) {
					for(k=j+1; k<m; k++) {
						if(mat[i][j]>mat[i][k] && mat[i][k]%2==0) {
							int aux = mat[i][k];
							mat[i][k] = mat[i][j];
							mat[i][j] = aux;
						}
					}
				}	
			}
		}
	}
	pOut = fopen("f.out", "w");
	fputs("Ordered matrix :\n", pOut);
	for(i=0; i<n; i++) {
		fprintf(pOut, "\n");
		for(j=0; j<m; j++) {
			fprintf(pOut, "%d ", mat[i][j]);
		}
	}
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	fclose(pIn);
	fclose(pOut);
	return 0;
}