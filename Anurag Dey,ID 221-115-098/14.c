#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Type a uppercase character:");
    scanf("%c",&upper);
    if(upper>='A' && upper<='Z')
    {
        lower=('a'+ upper-'A');
    }
    else lower=upper;
    printf("The lowercase character is:%c",lower);
    return 0;
}
