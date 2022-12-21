#include<stdio.h>
void sm(int n)
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
    sm(n);
}