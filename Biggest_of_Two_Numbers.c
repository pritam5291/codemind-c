#include<stdio.h>
void bn(int a,int b)
{
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    bn(a,b);
}