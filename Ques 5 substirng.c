#include <stdio.h>
#include <stdlib.h>
void substring(char str[],char sub[],int start, int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        sub[i]=str[start-1+i];
    }
    sub[i]='\0';
}

int main()
{
    char str[200], sub[200];
    int start, len;

    printf("Main String: ");
    fgets(str, sizeof(str), stdin);

    printf("Starting Position: ");
    scanf("%d", &start);

    printf("Number of Characters: ");
    scanf("%d", &len);

    substring(str, sub, start, len);

    printf("\nSub-string extracted: %s\n", sub);

    return 0;
}

