#include<stdio.h>
int main()
{
    float km,meter;
    printf("Enter value in kilometer:\n");
    scanf("%f",&km);
    meter=km*1000;
    printf("Value in meters is:\n%f",meter);
    return 0;
}
