#include<stdio.h>
#include<stdio.h>
void main()
{
    int a,b,c,p;
    float s,area;
    printf("Enter three sides of Triangle:\n");
    scanf("%d%d%d",&a,&b,&c);

    p=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter= %d\nArea=%f\n",p,area);
}
