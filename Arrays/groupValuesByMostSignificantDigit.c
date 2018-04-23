/*
Read a vector a and n natural elements.
Display on separate rows the elements of the vector grouped by their most significant digit (first one).
Example : n = 5 and the vector 65 32 333 106 66 will display :
106
32 333
65 66
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>

int getFirstDigit(int num);

void main() {
	FILE *pIn = fopen("f.in", "r");
	if(!pIn) {
		perror("Error Occured");
		printf("Error Code: %d\n", errno);
	}
	int n, i, j, aux;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	if(fclose(pIn)) {
		perror("Error Occured");
		printf("Error Code: %d\n", errno);
	}
	bool isPrinted;
	for(j=1; j<=9; j++) {
		isPrinted = false;
		for(i=0; i<n; i++) {
			aux = a[i];
			while(aux>9) 
				aux /= 10;
			if(aux==j) {
				printf("%d ", a[i]);
				isPrinted = true;
			}
		}
		if(isPrinted)
			printf("\n");
	}
	free(a);
}