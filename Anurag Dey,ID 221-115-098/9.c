#include<stdio.h>
int main()
{
    int a,b,third;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    third=a;
    a=b;
    b=third;
    printf("\n After swapping,first number=%d",a);
    printf("\n After swapping,second number=%d",b);
    return 0;

}

