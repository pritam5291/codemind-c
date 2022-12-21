#include<stdio.h>
void gross(int n)
{
    float da,hra,tc;
    if(n<=10000)
    {
        da=n*0.8;
        hra=n*0.2;
    }
    else if(n<=20000)
    {
        da=n*0.9;
        hra=n*0.25;
    }
    else
    {
        da=n*0.95;
        hra=n*0.3;
    }
    tc=n+da+hra;
    printf("%0.2f",tc);
}
int main()
{
    int n;
    scanf("%d",&n);
    gross(n);
}