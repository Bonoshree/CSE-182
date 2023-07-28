#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b&&a>c)? a:b>c? b:c;
    printf("The maximum number is:%d\n",max);
}
