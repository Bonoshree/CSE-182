#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    max=(a>b)?(printf("Max=%d",a)):(printf("Max=%d",b));
}
