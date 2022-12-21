#include<stdio.h>
#include<math.h>
void dis(float x1,float y1,float x2,float y2)
{
    float d;
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%0.4f",d);
}
int main()
{
    float x1,y1,x2,y2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    dis(x1,y1,x2,y2);
}