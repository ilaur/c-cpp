/*
Given a vector v with n natural numbers.
Build two vectors.
One having the initial vector's even elements and the other the odd elements of the initial vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, i, prevOdd = 0, prevEven = 0; 
	fscanf(pIn, "%d", &n);
	int *v = (int*)malloc((int)sizeof(int)*n);
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &v[i]);
	int *vEven = (int*)malloc((int)sizeof(int)*n);
	int *vOdd = (int*)malloc((int)sizeof(int)*n);
	for(i=0; i<n; i++)
		v[i] % 2 == 0 ? vEven[prevEven++] = v[i] : (vOdd[prevOdd++] = v[i]);
	pOut = fopen("f.out", "w");
	fputs("vEven :\n", pOut);
	for(i=0; i<prevEven; i++)
		fprintf(pOut, "%d ", vEven[i]);
	fputs("\nvOdd :\n", pOut);
	for(i=0; i<prevOdd; i++)
		fprintf(pOut, "%d ", vOdd[i]);
	fclose(pIn);
	fclose(pOut);
	free(vEven);
	free(vOdd);		
	free(v);
	return 0;
}