#include<stdio.h>
void gross(float a,float b,float c)
{
    float pf,tc;
    pf = a*0.12;
    tc = a+b+c+pf;
    printf("%0.2f
%0.2f",pf,tc);
}
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    gross(a,b,c);
}