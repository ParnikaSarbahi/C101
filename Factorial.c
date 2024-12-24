#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n,answer;
    printf("Enter a number:");
    scanf("%d",&n);
    answer=fact(n);
    printf("%d\n",answer);
}
