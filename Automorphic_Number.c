#include<stdio.h>
int main()
{
    int n,t,s,count=1;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n!=0)
    {
        count=count*10;
        n=n/10;
    }
    if(s%count==t)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}