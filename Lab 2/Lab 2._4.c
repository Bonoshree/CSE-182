#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    d=2*r;
    printf("Diameter of circle:%f\n",d);
    c=2*3.14*r;
    printf("Circumference of circle:%f\n",c);
    a=3.14*r*r;
    printf("Area of circle:%f\n",a);
}
