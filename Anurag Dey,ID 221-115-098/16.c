#include<stdio.h>
int main()
{
    char upper;
    printf("Enter any Uppercase letter:");
    scanf("%c",&upper);
    printf("The Lowercase letter is:%c\n",upper+32);
    return 0;
}
