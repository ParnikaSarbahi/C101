#include<stdio.h>
int partition(int A[][3],int l,int h);
void quicksort(int A[][3],int l,int h){
    if(l<h){
        int p=partition(A,l,h);
        quicksort(A,l,p-1);
        quicksort(A,p+1,h);
    }
}

int partition(int A[][3],int l,int h){
    int pivot=A[h][2];
    int left=l;
    int right=h-1;
    while(left<=right){
        while(left<=right && A[left][2]<=pivot)
            left++;
        while(left<=right && A[right][2]>pivot)
            right--;
        if(left<right){
            for(int i=0;i<3;i++) {
                int temp = A[left][i];
                A[left][i] = A[right][i];
                A[right][i] = temp;
            }
        }
    }
    int temp=A[left][2];
    A[left][2]=A[h][2];
    A[h][2]=temp;

    return(left);
}
void main(){
    int arr[][3]={{1,2,100},{2,1,50},{3,2,75},{4,1,80},{5,3,90}};
    quicksort(arr,0,4);
    for (int i = 0; i < 5; i++) {
        printf("(%d, %d, %d)\n", arr[i][0], arr[i][1],arr[i][2]);
    }
}