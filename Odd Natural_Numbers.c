#include<stdio.h>
void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
             printf("%d ",i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    odd(n);
}