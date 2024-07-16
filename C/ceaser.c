#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char rotate(char c[100], int n);
int main(int argc, char argv[10])
{
    char str[100];
    do
    {
        printf("Usage:  ./ceaser key\n");
    } 
    while (argc == 2);
    printf("Plaintext:  ");
    fgets(str, 100, stdin);
    rotate(str, atoi(argv[1]));
    printf("Ciphertext: %s\n", str);
}

char only_digit(char c[100])
{
    int l = strlen(c);
    for (int i = 0; i < l; i++)
    {
        if (!isdigit(c[i]))
        {
            return 'f';
        }
        else
        {
            return 't';
        }
    }
}

char rotate(char c[100], int n)
{
    int l = strlen(c);
    for (int i=0; i<l; i++)
    {
        
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            return 'A' + (c[i] - 'A' + n) % 26;
        }
        else if (c[i] >= 'a' && c[i] <= 'z')
        {
           return 'a' + (c[i] - 'a' + n) % 26;
        }
        else
        {
            return c[i];   
        }

    }
}