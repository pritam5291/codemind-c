#include<stdio.h>
void even(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    even(m,n);
}