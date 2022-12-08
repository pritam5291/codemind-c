#include<stdio.h>
void si(int p,int r,int t)
{
    int a;
    a=(p*r*t)/100;
    printf("%d",a);
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    si(p,r,t);
}