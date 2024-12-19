#include<stdio.h>
int RBinSearch(int A[],int low,int high,int key){
    if(low==high){
        if(A[low]==key)
            return low;
        else
            return -1;
    }
    else
    {
        int mid=(low+high)/2;
        if(key==A[mid])
            return mid;
        if(key<A[mid])
            return RBinSearch(A,low,mid-1,key);
        else
            return RBinSearch(A,mid+1,high,key);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int key;
    printf("Enter number to search:");
    scanf("%d",&key);
    int size=sizeof(arr)/sizeof(arr[0]);
    int answer=RBinSearch(arr,0,size,key);
    printf("%d",answer);
    return 0;
}
