#include<stdio.h>
void sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}