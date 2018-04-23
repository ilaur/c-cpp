/*
Big natural numbers of many digits can be stored in memory with vectors.
Calculate and display the sum of two natural numbers stored in two separate vectors,
a and b with n and m elements.
The reading of the digits will be made from keyboard with a space between the digits.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	if(!pIn) {
		perror("Issue Occured ");
		printf("Error code : %d\n", errno);
		exit(1);
	}
	int n, m, i, maxNum, k = 0;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=n-1; i>=0; i--)
		fscanf(pIn, "%d", &a[i]);
	fscanf(pIn, "%d", &m);
	int *b = (int*)malloc(m*sizeof(int));
	for(i=m-1; i>=0; i--)
		fscanf(pIn, "%d", &b[i]);
	if(fclose(pIn)) {
		perror("Issue Occured ");
		printf("Error code : %d\n", errno);
		exit(2);
	}
	n >= m ? maxNum = n : (maxNum = m);
	int *c = (int*)malloc((maxNum+1)*sizeof(int));
	for(i=0; i<=maxNum; i++) {
		c[i] = (a[i] + b[i] + k)%10;
		k = (a[i]+ b[i] + k)/10;
	}
	free(a);
	free(b);
	for(i=maxNum-1; i>=0; i--)
		printf("%d", c[i]);
	puts("");
	free(c);
}