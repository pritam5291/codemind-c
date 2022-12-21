#include<stdio.h>
void mul(int a,int b)
{
    int i,p;
    for(i=1;i<=b;i++)
    {
        p = a * i;
        printf("%d x %d = %d
",a,i,p);
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mul(a,b);
}