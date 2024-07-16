#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char agrv[10])
{
    int l = strlen(agrv);
    char plaintext[500];
    do
    {
        printf("Enter plaintext: \n");
        fgets(plaintext, 100, stdin);
    }
    while (argc != 2);
    printf("%s",agrv);
}