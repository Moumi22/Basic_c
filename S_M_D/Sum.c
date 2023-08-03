#include<stdio.h>

int main()
{
    int a,b,sum,sub,mul,division;

    printf("Enter the value a:\n");
    scanf("%d",&a);

    printf("Enter the value b:\n");
    scanf("%d",&b);

    sum=a+b;
    printf("Sum=%d\n",sum);

    sub=a-b;
    printf("Sub=%d\n",sub);

    mul=a&b;
    printf("Mul=%d\n",mul);

    division=a/b;
    printf("Division=%d\n",division);

    return 0;
}
