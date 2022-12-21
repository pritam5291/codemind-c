#include<stdio.h>
void wei(int n)
{
    if(n%2==0)
    {
        printf("not weird");
    }
    else
    {
        printf("weird");
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    wei(n);
}