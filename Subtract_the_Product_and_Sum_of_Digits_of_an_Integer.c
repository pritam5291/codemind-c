#include<stdio.h>
int main()
{
    int n,q,p=1,s=0,r,tc;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        p=p*r;
        s=s+r;
        q=q/10;
    }
    tc=p-s;
    printf("%d",tc);
}