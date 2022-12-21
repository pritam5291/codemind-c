#include<stdio.h>
void num(int n)
{
    if(n%9==0)
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
    num(n);
}