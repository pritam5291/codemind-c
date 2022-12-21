#include<stdio.h>
void swap(int a,int b)
{
    int tc,c,d;
    tc = a+b;
    c = tc-a;
    d = tc-b;
    printf("%d
%d",c,d);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
}