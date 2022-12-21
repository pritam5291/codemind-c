#include<stdio.h>
void con(int x,int a,int b)
{
    int tc;
    tc=a*1+b*2;
    if(tc>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
int main()
{
   int x,a,b;
   scanf("%d%d%d",&x,&a,&b);
   con(x,a,b);
}