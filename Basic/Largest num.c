#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Largest number is a= %d",a);
    }
    else
    {
        printf("Largest number is b= %d",b);
    }
    return 0;
}
