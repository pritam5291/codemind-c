#include<stdio.h>
void larg(int a,int b,int c)
{
    if(a>b)
    {
        printf("%d",a);
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    larg(a,b,c);
}