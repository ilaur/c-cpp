/*
Read a squared matrix of integer natural numbers.
Display elements that have their row and column sums equal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, m, i, j, k, sumRow, sumColumn;
	fscanf(pIn, "%d %d", &n, &m);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	fclose(pIn);
	pOut = fopen("f.out", "w");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			sumRow = 0;
			sumColumn = 0;
			for(k=0; k<m; k++)
				sumRow += mat[i][k];
			for(k=0; k<n; k++)
				sumColumn += mat[k][j];
		if(sumRow==sumColumn)
			fprintf(pOut, "%d ", mat[i][j]);
		}
	}
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	fclose(pOut);
	return 0;
}