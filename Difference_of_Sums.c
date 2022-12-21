#include<stdio.h>
void ds(int n)
{
    int i,p,sum=0,s,d,tc;
    for(i=1;i<=n;i++)
    {
        p=i*i;
        sum = sum + p;
        s=n*(n+1)/2;
        d=s*s;
        tc = d-sum;
    }
    printf("%d",tc);
}
int main()
{
    int n;
    scanf("%d",&n);
    ds(n);
}