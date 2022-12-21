#include<stdio.h>
void sn(int a)
{
    int i;
    for(i=a;i>=1;i--)
    {
        printf("%d ",i);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    sn(a);
}