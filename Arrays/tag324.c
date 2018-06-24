/*
Read a vector a with n natural elements.
Eliminate from all the elements of the vector the odd digits and display the resulting vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fIn = fopen("fIn", "r");
	int n, i, x, p;
	fscanf(fIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(fIn, "%d", &a[i]);
	fclose(fIn);
	for(i=0; i<n; i++) {
		x=0;
		p=1;
		while(a[i]>0) {
			if(a[i]%10%2==0) {
				x+=p*(a[i]%10);
				p*=10;
			}
			a[i]/=10;
		}
		a[i]=x;
	}
	for(i=0; i<n; i++) printf("%d ", a[i]);
	free(a);
	puts("");
	return 0;
}