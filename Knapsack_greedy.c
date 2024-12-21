#include<stdio.h>
void main(){
    int w,n;
    printf("Enter weight capacity of knapsack:");
    scanf("%d",&w);
    printf("Enter number of items:");
    scanf("%d",&n);
    int arr[n][3];
    float value_weight[n][2];;
    for(int i=0;i<n;i++){
        arr[i][0]=i+1;
        value_weight[i][0]=i+1;
        printf("enter Weight of item number %d:",i+1);
        scanf("%d",&arr[i][1]);
        printf("enter value of item number %d:",i+1);
        scanf("%d",&arr[i][2]);
        value_weight[i][1]=arr[i][2]/arr[i][1];
    }
    printf("\nItem\tWeight\tValue\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j][1]<arr[j+1][1]){
                int temp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=temp;
            }
        }
    }
    printf("\nItem no\tWeight\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
}