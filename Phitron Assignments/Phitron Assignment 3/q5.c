#include<stdio.h>
#include<string.h>

int is_palindrome(char str[], int s)
{
    int i = 0, j = s-1;
    while(i<=(s/2))
    {
        if(str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main()
{
    char str[100];
    gets(str);
    int s = strlen(str);

    if(is_palindrome(str, s)) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}