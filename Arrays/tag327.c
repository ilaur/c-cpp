/*
Read a vector with n distinct natural elements.
Display the pair of elements of the vector that has the highest GCD.
*/

#include <stdio.h>
#include <stdlib.h>

int computeGDC(int a, int b) {
	while(a!=0 && b!=0) {
		if(a > b)
			a%=b;
		else
			b%=a;
	}
	int max;
	a > b ? max = a : (max = b);
	return max;
}

int main() {
	FILE *fIn = fopen("fIn", "r");
	int n, i, j, p, q, maxGDC = 0;
	fscanf(fIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(fIn, "%d", &a[i]);
	fclose(fIn);
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(maxGDC<computeGDC(a[i], a[j])) {
				maxGDC = computeGDC(a[i], a[j]);
				p = a[i];
				q = a[j];
			}
		}
	}
	free(a);
	printf("%d %d", p, q);
	puts("");
	return 0;
}