#include <stdio.h>
#include <string.h>
#include <ctype.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int comput_score(char *text);


int main()
{
    char player1[50];
    scanf("%s",&player1);
    char player2[50];
    scanf("%s",&player2);

    int point1 = comput_score(player1);
    printf("%d\n",point1);
    int point2 = comput_score(player2);
    printf("%d\n",point2);


    if (point1 > point2)
    printf("player 1 wins!\n");
    else if (point2 > point1)
    printf("player 2 wins!\n");
    else
    printf("it's a draw!\n");

}

int comput_score(char text[50])
{
    int score = 0, l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (isupper(text[i]))
        {
        score += points[text[i] - 'A'];
        }

        else if (islower(text[i]));
        {
        score += points[(text[i] - 'a')];
        }
    }
    return score;
}