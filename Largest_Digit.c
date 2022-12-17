#include<stdio.h>
int main()
{
    int n,r,l=0,q;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        if(r>l)
        {
            l=r;
        }
        q=q/10;
    }
    printf("%d",l);
}