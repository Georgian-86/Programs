#include <stdio.h>
int main()
{
    int score[3];
    for (int i=0;i<3;i++)
    {
        printf("score[%d]: ",i+1);
        scanf("%d",&score[i]);
    }
    printf("Average: %.2f\n",(score[0]+score[1]+score[2])/3.0);

}