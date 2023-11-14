#include <stdio.h>

void sort(int a[], int len);
void swap(int *x, int *y);

int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr,n);
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int a[], int len) {
    int i, j;
    for(i=0; i<len-1; i++) {
        for(j=i+1; j<len; j++) {
            if(a[i]>a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}