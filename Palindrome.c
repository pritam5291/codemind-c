#include<stdio.h>
void pal(int n)
{
    int r,s=0,q;
    q=n;
    while(q>0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pal(n);
}