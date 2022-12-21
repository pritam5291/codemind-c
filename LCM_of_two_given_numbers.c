#include<stdio.h>
void lcm(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
    }
    printf("%d",i);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    lcm(a,b);
    
}