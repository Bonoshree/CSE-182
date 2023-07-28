#include<stdio.h>
int main()
{
    int unit;
    float total;
    printf("Enter unit:\n");
    scanf("%d",&unit);
    if(unit<=50){
        total=unit*0.5;
    }
    else if(unit<=150){
        total=(unit*0.5)+((unit-50)*0.75);
    }
    else if(unit<=250){
        total=(unit*0.5)+(100*0.75)+((unit-150)*1.20);
    }
    else if(unit>250){
        total=(unit*0.5)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
    }
    total=total+total*0.2;
    printf("Your total bill is:%f",total);
    return 0;
}
