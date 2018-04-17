/*
Read from the keyboard a string of n natural numbers.
Display the maximum even number of the string.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fIn, *fOut;
	fIn = fopen("f.in", "r");
	int n, i, maxEven = 0; 
	fscanf(fIn, "%d", &n);
	int *v = (int*)malloc((int)sizeof(int)*n);
	for(i=0; i<n; i++)
		fscanf(fIn, "%d", &v[i]);
	for(i=0; i<n; i++)
		if(v[i]%2==0)
			if(v[i]>maxEven)
				maxEven = v[i];
	free(v);
	fOut = fopen("f.out", "w");
	fprintf(fOut, "Max even number : %d\n", maxEven);
	fclose(fIn);
	fclose(fOut);
	return 0;
}