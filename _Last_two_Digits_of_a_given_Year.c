#include<stdio.h>
void dig(int n)
{
    int z;
    z = n%100;
    printf("%02d",z);
}
int main()
{
    int n;
    scanf("%d",&n);
    dig(n);
}