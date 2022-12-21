#include<stdio.h>
void current(int n)
{
    float tc,s,b;
    if(n<=199)
    {
        b=n*1.2;
    }
    else if(n>=200 && n<=400)
    {
        b=n*1.5;
    }
    else if(n>=400 && n<=600)
    {
        b=n*1.8;
    }
    else
    {
        b=n*2;
    }
    if(n>400)
    {
        s=b*0.15;
    }
    else
    {
        s=100;
    }
    tc=b+s;
    printf("%0.2f",tc);
}
int main()
{
    int n;
    scanf("%d",&n);
    current(n);
}