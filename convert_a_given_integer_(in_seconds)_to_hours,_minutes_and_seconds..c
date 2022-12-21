#include<stdio.h>
#include<math.h>
void con(int s)
{
    int h,m,s1;
    h = s/3600;
    m = (s%3600)/60;
    s1 = (s%3600)%60;
    printf("H:M:S-%d:%d:%d",h,m,s1);
}
int main()
{
    int s;
    scanf("%d",&s);
    con(s);
}