#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p;
    float s,area;
    a=3;
    b=4;
    c=5;
    p=a+b+c ;
    s=(a+b+c)/2;
    printf("Perimeter is:%f\n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is:%f\n",area);
    return 0;

}
