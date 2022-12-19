#include<stdio.h>
int main()
{
    int s,b,t,capacity;
    scanf("%d%d%d",&s,&b,&t);
    capacity=2*s*t*b*512;
    printf("%d KB",capacity/1024);
    
}
   