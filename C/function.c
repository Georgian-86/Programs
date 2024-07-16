#include <stdio.h>
#include <string.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int X, Y;
    scanf("%d %d",&X,&Y);
    printf("The sum of X and Y is %d",add(X,Y));
}