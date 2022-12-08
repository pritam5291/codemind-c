#include<stdio.h>
#include<math.h>
void area(int a,int b,int c)
{
    float d,e;
    d=(a+b+c)/2.0;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("%0.2f",e);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    area(a,b,c);
}