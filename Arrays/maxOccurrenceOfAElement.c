/*
Read a mXn matrix with integer elements.
Determine the element that occurs the most in the matrix, display it and the number of times it appers.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, m, i, j, k = 0, aux, maxOccurrence = 0, occurringValue, occurrence = 0;
	fscanf(pIn, "%d %d", &n, &m);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	fclose(pIn);
	int *vec = (int*)malloc(n*m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			vec[k++] = mat[i][j];
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	for(i=0; i<n*m; i++) {
		for(j=i+1; j<n*m; j++) {
			if(vec[i]>vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
	for(i=0; i<n*m; i++) {
		if(vec[i]==vec[i+1] || vec[i]!=vec[i+1])
			occurrence++;
		if(vec[i]!=vec[i+1]) {
			if(occurrence>maxOccurrence) {
				maxOccurrence = occurrence;
				occurringValue = vec[i];
			}
			occurrence = 0;
		}
	}
	pOut = fopen("f.out", "w");
	free(vec);
	fprintf(pOut, "%d occurres %d times!", occurringValue, maxOccurrence);
	fclose(pOut);
	return 0;
}