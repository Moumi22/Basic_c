#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter lowercase letter:\n");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("Uppercase letter= %c",upper);
    return 0;

}
