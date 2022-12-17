#include<stdio.h>
void pn(int n)
{
    int q;
    q=n;
    if(q<0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Positive Number");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pn(n);
}