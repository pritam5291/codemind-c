#include<stdio.h>
void si(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		    printf("*");
		}
		printf("
");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	si(n);
}