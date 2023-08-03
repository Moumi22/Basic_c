#include<stdio.h>
int main()
{
    char smallletter;
    printf("Enter any letter:\n");
    scanf("%c",&smallletter);
    printf("Capital letter=%c",smallletter-32);
    return 0;
}

