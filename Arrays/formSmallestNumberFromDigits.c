/*
Read a natural number n;
Display the smallest number you can form with all the digits of n.
The minimum number must have the same number of digits as the initial n (can't start with the digit 0).
A frecvency vector will be used.
Example : If n is 52200996 the smallest number is 20025699
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	unsigned long num, *splitNum = NULL;
	int size = 0;
	printf("Please enter a number : ");
	scanf("%lu", &num);
	while(num/10)
}