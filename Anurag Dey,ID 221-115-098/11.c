#include<stdio.h>
int main()
{
    int dividend,divisor,quotinet,reminder;
    printf("Enter dividend:");
    scanf("%d",&dividend);
    printf("Enter divisor:");
    scanf("%d",&divisor);
    quotinet=dividend/divisor;
    reminder=dividend%divisor;
    printf("\n quotinet=%d",quotinet);
    printf("\n reminder=%d",reminder);
    return 0;

}
