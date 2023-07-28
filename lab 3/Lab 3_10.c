#include<stdio.h>
#include<stdio.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("ax^2+bx+c=0 be a quadratic equation.\n");
    printf("Enter the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The real roots=%f and %f",r1,r2);
    }
    else if(d==0){
        r1=r2=-b/(2*a);
        printf("Roots are equal=%f and %f",r1,r2);
    }
    else{
        printf("Roots are imaginary.");
    }
    return 0;
}
