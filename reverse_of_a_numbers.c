#include<stdio.h>
int main()
{
    int n,s=0,t,r;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    printf("%d",s);
}