#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    if(a<b && a<c)
    {
        printf("%d",d-a);
    }
    else if(b<a && b<c)
    {
        printf("%d",d-b);
    }
    else if(c<a && c<b)
    {
        printf("%d",d-c);
    }
}