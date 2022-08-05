#include<stdio.h>
int fact(int );
int permutation(int ,int );
int main()
{
    int n,r,k;
    printf("Enter number of element=");
    scanf("%d",&n);
    printf("Enter number of element to arrange=");
    scanf("%d",&r);
    k=permutation(n,r);
    printf("Total number of arrangement=%d",k);
    return 0;
}
int permutation(int n,int r)
{
    return fact(n)/fact(n-r);
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}
