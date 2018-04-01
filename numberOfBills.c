/**
Adrian has a S sum to pay. He has currency in the form of the a, b and c values.
Display number the minimum number of bills that he need to pay for the sum S.
It is presummed that the number of bills are enough at the input and the sum S can be paid.
Examples:
S=75, a=50, b=30, c=5 => will display 1*50 5*5
S=170, a =100, b=20, c=10 => will display 1*100 3*20 1*10
*/

#include <stdio.h>

void sort(int* arr, int size);
void print(const int* arr, int size);

int main() {
    printf("Please input the sum S and the value of the bills a, b, c : ");
    int a[4];
    int size = sizeof(a)/sizeof(*a);
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    sort(a, size);
    int cnt1=0, cnt2=0, cnt3=0;
    while(a[0]>a[1]) {
        a[0]-=a[1];
        cnt1++;
    }
    while(a[0]>a[2]) {
        a[0]-=a[2];
        cnt2++;
    }
    while(a[0]>=a[3]){
        a[0]-=a[3];
        cnt3++;
    }
    if(cnt1==0) {
        printf("%d*%d %d*%d",cnt2, a[2], cnt3, a[3]);
    }
    else if(cnt2==0) {
        printf("%d*%d %d*%d",cnt1, a[1], cnt3, a[3]);
    }
    else if(cnt3==0) {
        printf("%d*%d %d*%d",cnt1, a[1], cnt2, a[2]);
    }
    else {
        printf("%d*%d %d*%d %d*%d",cnt1, a[1], cnt2, a[2], cnt3, a[3]);
    }
    return 0;
}

/// bubble sort O(n^2)
void sort(int* arr, int size) {
    int i;
    for(i=1; i<size; ++i) {
        int j;
        for(j=i+1; j<size; ++j) {
            if(arr[i]<arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

/// test function
void print(const int* arr, int size) {
    int i;
    for(i=1; i<size; ++i)
        printf(" %d ", arr[i]);
}
