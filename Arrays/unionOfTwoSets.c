/*
Two sets a and b with n and m elements are read from the keyboard.
Display the union of the of the two sets a and b.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Length of the first set : ");
	int n, m, i, j, k = 0, p = 0; 
	scanf("%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	puts("Elements :");
	for(i=0; i<n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("Lenth of the second set : ");
	scanf("%d", &m);
	int *b = (int*)malloc(m*sizeof(int));
	puts("Elements :");
	for(i=0; i<m; i++) {
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);
	}
	int *c = (int*)malloc((n+m)*sizeof(int));
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]==a[j])
				break;
		}
		if(j==n)
			c[k++] = a[i];
	}
	for(i=0; i<m; i++) {
		for(j=i+1; j<m; j++) {
			if(b[i]==b[j])
				break;
		}
		if(j==m)
			c[k++] = b[i];
	}
	free(a);
	free(b);
	int *d = (int*)malloc((n+m)*sizeof(int));
	for(i=0; i<k; i++) {
		for(j=i+1; j<k; j++) {
			if(c[i]==c[j])
				break;
		}
		if(j==k)
			d[p++] = c[i];
	}
	free(c);
	for(i=0; i<p; i++)
		printf("%d ", d[i]);
	printf("\n");
	free(d);
	return 0;
}