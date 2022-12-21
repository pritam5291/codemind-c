#include<stdio.h>
void sum(int n)
{
    int z;
    z = n*(n+1)/2;
    printf("%d",z);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}