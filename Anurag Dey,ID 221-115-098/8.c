#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter Centigrade:");
    scanf("%f",&celsius);
    fahrenheit=(9*celsius)/5-32;
    printf("Celsius to fahrenheit is %f\n",fahrenheit);
    return 0;

}
