#include <stdio.h>
int main()
{
    int score[3];
    score[0]=78;
    score[1]=79;
    score[2]=68;
    printf("Average: %.2f\n",(score[0]+score[1]+score[2])/3.0);
}