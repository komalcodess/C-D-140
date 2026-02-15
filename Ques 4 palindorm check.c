#include <stdio.h>
#include <string.h>
int palin(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the size of the string: ");
    scanf("%d",&n);
    char str[n];
    printf("Enter string: ");
    scanf("%s",str);

    if(palin(str))
        printf("The string is palindrome.");
    else
        printf("The string is not palindrome");

}
