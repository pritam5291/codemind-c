#include<stdio.h>
void leap(int n)
{
    if(n%400==0)
    {
        printf("True");
    }
    else if(n%100==0)
    {
        printf("False");
    }
    else if(n%4==0)
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
    leap(n);
}