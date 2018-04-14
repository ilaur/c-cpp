/*
Read a natural number n of 4 digits at most. 
Write in a text file 2lan.out all the powers of 2 less or equal to 2 to the power of n, 
on separate lines.
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	FILE *pFile;
	printf("Please enter a number of 4-digits at most : ");
	scanf("%d", &n);
	if(n/1000 > ceil(9.999))
		return 0;
	pFile = fopen("2lan.out", "w+");
	int i = 0;
	while(pow(2, i)<=n) {
		fprintf(pFile, "%.0f\n", pow(2, i));
		i++;
	}
	fclose(pFile);
	return 0;
}