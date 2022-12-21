#include<stdio.h>
void mul(int a)
{
    int i,p;
    for(i=1;i<=12;i++)
    {
        p = a * i;
        printf("%d x %d = %d
",a,i,p);
    }
}
int main()
{
    int a;
    scanf("%d%d",&a);
    mul(a);
}