#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("Last digit is:%d\n",n%10);
    while(n>10){
        n=n/10;
    }
    printf("First digit is:%d",n);
    return 0;

}
