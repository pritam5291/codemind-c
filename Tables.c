#include<stdio.h>
void tab(int n,int r)
{
    int i,p;
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            p=n*i;
            printf("%d x %d = %d
",n,i,p);
        }
    }
}
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    tab(n,r);
}