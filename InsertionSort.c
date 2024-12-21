#include<stdio.h>
void INSERTION_SORT(int A[], int n) {
    for(int i=1;i<n;i++){  
        int key=A[i]; 
        int j = i-1;
        while (j >= 0 && A[j]>key) { 
            A[j+1] = A[j];
            j=j-1;  
        }
        A[j+1] = key;
    }
}
int main(){
    int A[]={2,7,4,1,6};
    int length=sizeof(A)/sizeof(A[0]);
    INSERTION_SORT(A,length);
    printf("Sorted array: ");
    for (int i=0;i<length;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
