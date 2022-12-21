#include<stdio.h>
void area(int b,int h)
{
    int c;
    c = (b*h)/2;
    printf("%d",c);
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    area(b,h);
}