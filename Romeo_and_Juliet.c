#include<stdio.h>
void rj(int a,int b,int c)
{
    int z;
    z = (5*a + 10*b)/c;
    printf("%d",z);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    rj(a,b,c);
}