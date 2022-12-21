#include<stdio.h>
void mul(int n,int a,int b)
{
    int i,p;
    for(i=a;i<=b;i++)
    {
        p=i*n;
        printf("%d x %d = %d
",n,i,p);
    }
}
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    mul(n,a,b);
}