#include <stdio.h>
#include <string.h>
int main()
{
    int l_count=0;
    char para[1000];
    fgets(para, 100, stdin);
    printf("%s", para);
    int l = strlen(para);
    printf("length: %d\n",l);
    for (int i=0; i<l; i++)
    {
        if ((para[i]>='A' && para[i]<='Z') || (para[i]>='a'&& para[i]<='z'))
        {
            l_count++;
        }
    }
    printf("no of letters: %d",l_count);
}