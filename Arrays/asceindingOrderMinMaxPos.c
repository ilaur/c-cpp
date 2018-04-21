/*
Read a vector a with n integer elements.
Order ascending the elements in the vector from the position 
with the minimum element to the position of the maximum element.
If the min element and the max element are one after another display
"Can't be ordered."
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, i, j, min, max, aux, minPos = 0, maxPos = 0;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	min = max = a[0];
	for(i=0; i<n; i++) {
		if(a[i]>max) {
			max = a[i];
			maxPos = i;
		} 
		else if(a[i]<min) {
			min = a[i];
			minPos = i;
		}
	}
	if(maxPos+1==minPos || minPos+1==maxPos) {
		free(a);
		printf("Can't be ordered\n");
		return 0;
	}
	if(minPos > maxPos) {
		min = maxPos;
		max = minPos;
	} 
	else {
		min = minPos;
		max = maxPos;
	}
	for(i=min; i<=max; i++) {
		for(j=i+1; j<=max; j++) {
			if(a[i]>a[j]) {
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
	pOut = fopen("f.out", "w");
	for(i=0; i<n; i++)
		fprintf(pOut, "%d ", a[i]);
	fclose(pOut);
	free(a);
	return 0;
}