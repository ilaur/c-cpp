/*
Given 2 vectors u and v, with m and n elements.
Make a new vector w and unite u and v in w with the elements of the two vectors u, v, the elements in w must be distinct.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int m, n, i;
	fscanf(pIn, "%d", &m);
	int *u = (int*)malloc((int)sizeof(int)*m);
	for(i=0; i<m; i++)
		fscanf(pIn, "%d", &u[i]);
	fscanf(pIn, "%d", &n);
	int *v = (int*)malloc((int)sizeof(int)*n);
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &v[i]);
	int *w = (int*)malloc((int)sizeof(int)*(m + n));
	int emptySpot = 0;
	for(i=0; i<m; i++) {
		int j;
		for(j=0; j<emptySpot; j++) {
			if(u[i]==w[j])
				break;
		}
		if(j==emptySpot)
			w[emptySpot++] = u[i];
	}
	for(i=0; i<n; i++) {
		int j;
		for(j=0; j<emptySpot; j++) {
			if(v[i]==w[j])
				break;
		}
		if(j==emptySpot)
			w[emptySpot++] = v[i];
	}
	pOut = fopen("f.out", "w");
	fputs("The reunion w : ", pOut);
	for(i=0; i<emptySpot; i++)
		fprintf(pOut, "%d ", w[i]);
	free(v);
	free(u);
	free(w);
	fclose(pOut);
	fclose(pIn);
	return 0;
}