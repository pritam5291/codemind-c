#include<stdio.h>
void mul(int m,int n)
{
    int i,c=0;
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    mul(m,n);
}