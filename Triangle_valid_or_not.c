#include<stdio.h>
void triangle(int a,int b,int c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    triangle(a,b,c);
}