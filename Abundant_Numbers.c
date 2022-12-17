#include<stdio.h>
void abun(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>n)
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
    abun(n);
}