#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Type a lowercase character:");
    scanf("%c",&lower);
    if(lower>='a' && lower<='z')
    {
        upper=('A'+ lower-'a');
    }
    else lower=upper;
    printf("The uppercase character is:%c",upper);
    return 0;
}
