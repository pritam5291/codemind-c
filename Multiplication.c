#include<stdio.h>
void mul (int m, int n)
{
    int p;
    p=m*n;
    printf("%d",p);
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    mul(m,n);
}