#include<stdio.h>
void ap(int n)
{
    float a,p;
    a = 3.14 * n * n;
    p = 2 * 3.14 * n;
    printf("%0.2f
%0.2f",a,p);
}
int main()
{
    int n;
    scanf("%d",&n);
    ap(n);
}