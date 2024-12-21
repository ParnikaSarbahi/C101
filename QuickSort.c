#include<stdio.h>
int partition(int A[],int l,int h);
void quicksort(int A[],int l,int h){
    if(l<h){
        int p=partition(A,l,h);
        quicksort(A,l,p-1);
        quicksort(A,p+1,h);
    }
}

int partition(int A[],int l,int h){
    int pivot=A[h];
    int left=l;
    int right=h-1;
    while(left<=right){
        while(left<=right && A[left]<=pivot)
            left++;
        while(left<=right && A[right]>pivot)
            right--;
        if(left<right){
            int temp=A[left];
            A[left]=A[right];
            A[right]=temp;
        }
    }
    int temp=A[left];
    A[left]=A[h];
    A[h]=temp;

    return(left);
}
int main(){
    int arr[] = {4, 6, 2, 8, 12, 10, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size - 1);
    printf("Elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
