#include<stdio.h>
int main()
{
    int num;
    printf("Enter ASCII number:");
    scanf("%d",&num);
    printf("The appropriate character of ASCII %d:%c",num,num);
    return 0;
}
