#include <stdio.h>
int main()
{
    int N;
    do
    {
       N = scanf("%d",&N);
    }
    while (N <= 0);
    for (int i=0; i<=N; i++)
    {
        for (int j=0; j<N-i; j++)
        {
            printf(" ");
        }
        for (int j=0; j<i; j++)
        {
            printf("#");
        }
    }
        printf("\n");
}

