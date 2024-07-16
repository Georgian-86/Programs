// #include <cs50.h>
#include <stdio.h>
int main()
{
    int N;
    do
    {
        N=scanf("%d",&N);
    }
    while (N<=0);
    for (int i=0;i<=N;i++)
    {
        for (int j=N; j>=0; j--)
        {
            if (i<=j)
            printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
}
