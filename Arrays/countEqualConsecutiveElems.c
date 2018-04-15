/*
Given a vector v with n natural numbers as elements.
Find how many times we find two equal consecutive elements.
*/

#include <stdio.h>
#include <stdlib.h>

void printVec(int* vec, int size);
int getNumConsNums(int* vec, int size);

int main() {
	FILE *pIn, *pOut;
	pIn = fopen("1.in", "r");
	int n, i;
	fscanf(pIn, "%d", &n);
	int *v = (int*)malloc((int)sizeof(int)*n);
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &v[i]);
	pOut = fopen("2.out", "w");
	fprintf(pOut, "%d", getNumConsNums(v, n));
	free(v);
	fclose(pIn);
	fclose(pOut);
	return 0;
}

int getNumConsNums(int* vec, int size) {
	int count = 0, i;
	for(i=0; i<size-1; i++)
		if(vec[i]==vec[i+1])
			count++;
	return count;
}