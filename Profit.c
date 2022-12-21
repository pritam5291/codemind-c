#include<stdio.h>
void pl(int s,int c)
{
    int sp,cp;
    sp=c-s;
    cp=s-c;
    if(sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}
int main()
{
    int s,c;
    scanf("%d%d",&s,&c);
    pl(s,c);
}