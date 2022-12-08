#include<stdio.h>
void mul(float a,float b)
{
    float c;
    c=a*b;
    printf("%0.2f",c);
}
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    mul(a,b);
}