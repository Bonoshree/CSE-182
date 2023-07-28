#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three integer:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("Maximum number is a.");
    }
    else if(b>c){
        printf("Maximum number is b.");
    }
    else{
        printf("Maximum number is c.");
    }
    return 0;
}
