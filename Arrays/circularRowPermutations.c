/*
Read a nXm matrix with natural numbers as elements.
Do row circular permutations.
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
	pOut = fopen("f.out", "w");
	for(i=0; i<n; i++) {
		fprintf(pOut, "\nPermuatation : %d\n", i+1);
		for(j=0; j<m; j++)
			fprintf(pOut, "%d ", mat[i][j]);
		for(j=i+1; j<n; j++) {
			fputs("\n", pOut);
			for(k=0; k<m; k++)
				fprintf(pOut, "%d ", mat[j][k]);
		}
		for(j=0; j<i; j++) {
			fputs("\n", pOut);
			for(k=0; k<m; k++)
				fprintf(pOut, "%d ", mat[j][k]);
		}
	}
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	fclose(pIn);
	fclose(pOut);
	return 0;
}