#include<stdio.h>
void eo(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    eo(n);
}