/*
Read a natural number n;
Display the smallest number you can form with all the digits of n.
The minimum number must have the same number of digits as the initial n (can't start with the digit 0).
A frecvency vector will be used.
Example : If n is 52200996 the smallest number is 20025699
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, i, j;
	int *arr = (int*)malloc(10*sizeof(int));
	for(i=0; i<10; i++) 
		*(arr+i) = 0;
	printf("Please enter a number : ");
	scanf("%d", &num);
	while(num>0) {
		arr[num%10]++;
		num/=10;
	}
	i = 1;
	while(arr[i]==0)
		i++;
	num = i;
	arr[i]--;
	for(i=0; i<10; i++)
		for(j=1; j<=arr[i]; j++)
			num = num*10+i;
	printf("%d", num);
	free(arr);
	puts("");
}
