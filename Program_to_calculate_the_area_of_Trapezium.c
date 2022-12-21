#include<stdio.h>
void area(int a,int b,int c)
{
    float d;
    d = (a+b)*c/2.0;
    printf("%0.4f",d);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    area(a,b,c);
}