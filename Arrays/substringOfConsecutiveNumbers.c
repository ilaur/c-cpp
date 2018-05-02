/*
Read a vector a with n natural elements.
Divide the vector in a minimum number of substrings with ascending consecutive elements and display the substrings on separate lines.
Example: If a = 3 10 4 5 4 6 11 5, then the substrings are :
3 4 5 6
10 11
4 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	int max = a[0];
	for(i=1; i<n; i++)
		if(max<a[i])
			max=a[i];
	int *b = (int*)malloc((max+1)*sizeof(int));
	for(i=0; i<=max; i++)
		b[i] = 0;
	for(i=0; i<n; i++)
		b[a[i]]++;
	free(a);
	bool writeLine;
	do {
		writeLine = false;
		for(i=0; i<=max; i++) {
			if(b[i]!=0) {
				printf("%d ", i);
				b[i]--;
				writeLine = true;
				if(b[i+1]==0)
					printf("\n");
			}
		}

	} while(writeLine);
	free(b);
}