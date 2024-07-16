#include <stdio.h>
#include <string.h>
int main()
{
    int w_count=0;
    char para[1000];
    fgets(para, 100, stdin);
    printf("%s", para);
    int l = strlen(para);
    printf("length: %d\n",l);
    for (int i=0; i<l; i++)
    {
        if (para[i] == ' ')
        {
            w_count++;
        }
    }
    printf("no of words: %d",w_count+1);
}