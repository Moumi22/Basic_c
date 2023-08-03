#include<stdio.h>
int main()
{
    int a, b, c, sum, avg;
    printf("enter value a:\n");
    scanf("%d",&a);
    printf("enter value b:\n");
    scanf("%d",&b);
    printf("enter value c:\n");
    scanf("%d",&c);

    sum=a+b+c;
    printf("Sum:%d\n",sum);

    avg=sum/3;
    printf("Avg:%d\n",avg);
    return 0;
}
