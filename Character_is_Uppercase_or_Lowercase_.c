#include<stdio.h>
void charc(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}
int main()
{
    char ch;
    scanf("%c",&ch);
    charc(ch);
}