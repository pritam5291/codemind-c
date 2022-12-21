#include<stdio.h>
void pr(int n)
{
    if(n%2==0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pr(n);
}