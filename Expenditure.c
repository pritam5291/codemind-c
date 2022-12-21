#include<stdio.h>
void ex(int x,int y)
{
    int tc;
    tc=y*30;
    if(tc<=x)
    {
        printf("YES");
    }
    else
    {
    printf("NO");
    }
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    ex(x,y);
}