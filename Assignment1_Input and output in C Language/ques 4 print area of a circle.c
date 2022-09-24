#include<stdio.h>
int main()
{
    int r;
    float ar;
    printf("enter the radius of a circle = ");
    scanf("%d",&r);
    ar=3.14*r*r;
    printf("Area of circle is %f having the radius %d",ar,r);
    return 0;
}
