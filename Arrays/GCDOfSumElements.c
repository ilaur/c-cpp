/*
Read a squared matrix with integer elements as natural numbers.
Calculate greatest common divisor of the sum of elements above the first diagonal 
and the sum of elements below the first diagonal.
*/

#include <stdio.h>
#include <stdlib.h>

int greatestCommonDivisor(int sum1, int sum2);

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, m, i, j, sumAbove = 0, sumBelow = 0;
	fscanf(pIn, "%d %d", &n, &m);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	fclose(pIn);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i>j)
				sumBelow += mat[i][j];
			else if(i<j)
				sumAbove += mat[i][j];
		}
	}
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	pOut = fopen("f.out", "w");
	fprintf(pOut, "GCD : %d", greatestCommonDivisor(sumBelow, sumAbove));
	fclose(pOut);
	return 0;
}

int greatestCommonDivisor(int sum1, int sum2) {
	int gcd, i;
	if(sum1<sum2) {
		for(i=1; i<=sum1; i++) {
			if(sum1%i==0 && sum2%i==0)
				gcd = i;
		}
	}
	else {
		for(i=1; i<=sum2; i++) {
			if(sum1%i==0 && sum2%i==0)
				gcd = i;
		}
	}
	return gcd;
}