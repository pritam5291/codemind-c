#include<stdio.h>
void triangle(int a,int b,int c)
{
    if(a==b && b==c && c==a)
    {
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    triangle(a,b,c);
}