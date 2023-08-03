#include<stdio.h>
int main()
{
    int diviend,divisor,qualient;
    float remainder;

    printf("Enter diviend :\n");
    scanf("%d",&diviend);

    printf("Enter divisor :\n");
    scanf("%d",&divisor);

    qualient= diviend/divisor;
    printf("qualient:%d\n",qualient);

    remainder=diviend%divisor;
    printf("remainder :%f\n",remainder);

    return 0;
}
