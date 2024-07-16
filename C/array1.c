#include <stdio.h>
int main()
{
    int score[3];
    for (int i=0;i<3;i++)
    {
        printf("score[%d]: ",i+1);
        scanf("%d",&score[i]);
    }
}