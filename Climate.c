#include<stdio.h>
void cli(int n)
{
    if(n>=20)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    cli(n);
}