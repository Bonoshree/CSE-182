#include<stdio.h>
int main()
{
    char alphabet='a';
    printf("Alphabets from a to z:\n");
    while(alphabet<='z'){
        printf("%c",alphabet);
        alphabet++;
    }
    return 0;
}
