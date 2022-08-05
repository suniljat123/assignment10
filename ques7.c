#include<stdio.h>
int combination(int ,int);
int main()
{
    int n,r,k;
    printf("Enter number of items=");
    scanf("%d",&n);
    printf("Enter number of items to select=");
    scanf("%d",&r);
    k=combination(n,r);
    printf("\nTotal number of combinations=%d",k);
    return 0;
}
int combination(int n,int r)
{
    int factr,factn;
    factr=fact(r);
    factn=fact(n);
    return factn/(factr*fact(n-r));
}
int fact(int a)
{
    if(a==1||a==0)
        return 1;
    return a*fact(a-1);
}
