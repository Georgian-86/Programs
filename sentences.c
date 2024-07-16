#include <stdio.h>
#include <string.h>
int main()
{
    int s_count=0;
    char para[1000];
    fgets(para, 100, stdin);
    printf("%s", para);
    int l = strlen(para);
    printf("length: %d\n",l);
    for (int i=0; i<l; i++)
    {
        if (para[i] == '.' || para[i]== '?' || para[i] == '!')
        {
            s_count++;
        }
    }
    printf("no of sentences: %d",s_count);
}