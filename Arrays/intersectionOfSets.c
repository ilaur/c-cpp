/*
Read 2 sets a and b with n and m elements.
Make a set c that contains the intersection of a and b.
(Common elements of the two sets taken only once).
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, m, i, j, k, l = 0;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fscanf(pIn, "%d", &m);
	int *b = (int*)malloc(m*sizeof(int));
	for(i=0; i<m; i++)
		fscanf(pIn, "%d", &b[i]);
	fclose(pIn);
	int *c = (int*)malloc((n+m)*sizeof(int));
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			if(a[i]==b[j]) {
				for(k=0; k<l; k++)
					if(c[k]==a[i])
						break;
				if(k==l)
					c[l++] = a[i];
			}
		}
	}
	free(a);
	free(b);
	for(i=0; i<l; i++)
		printf("%d ", c[i]);
	free(c);
	printf("\n");
}