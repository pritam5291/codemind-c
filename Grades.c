#include<stdio.h>
void grade(int a,int b,int c,int d,int e)
{
    int tc;
    tc = float(a+b+c+d+e)/5.0;
    if(tc>=90)
    {
        printf("Grade A");
    }
    else if(tc>=80)
    {
        printf("Grade B");
    }
    else if(tc>=70)
    {
        printf("Grade C");
    }
    else if(tc>=60)
    {
        printf("Grade D");
    }
    else if(tc>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    grade(a,b,c,d,e);
}