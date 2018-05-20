/*
Read a vector a with n natural elements. Display the elements in the vector that are less than thair flip.
Example: 238, 67, 419 are smaller number than their flipped.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, x, r; fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i = 0; i < n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i = 0; i < n; i++) {
		x = a[i];
		r = 0;
		while(x > 0) {
			r = r*10+x%10;
			x /= 10;
		}
		if(r > a[i])
			printf("%d ", a[i]);
	}
	free(a);
	puts("");
}