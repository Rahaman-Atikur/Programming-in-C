#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>='a' && a<='z')
    {
        int res= a-32;
        printf("%c",res);
    } 
    else if(a>='A' && a<='Z')
    {
        int res = a+32;
        printf("%c",res);

    }
    return 0;
}