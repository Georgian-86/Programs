#include <stdio.h>
#include <string.h>
#include <math.h>

int letter_count(char text[500]);
int word_count(char text[500]);
int sentence_count(char text[500]);


int main()
{
    int L, S;
    char str[500];
    fgets(str, 5000, stdin);
    int w = word_count(str), l = letter_count(str), s = sentence_count(str); 
    printf("Number of words: %d\n", w);
    printf("Number of letters: %d\n", l);
    printf("Number of sentences: %d\n", s);
    L = ( (float) l / w ) * 100;
    S = ( (float) s / w) * 100 ;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    printf("Index: %.2f\n",index);
    int rounded = round(index);
    printf("Roundex Index: %i\n", rounded);
    if(rounded < 1)
    printf("Before Grade 1\n");
    else if(rounded > 16)
    printf("Grade 16+\n");
    else
    printf("Grade level: %d", rounded);
}

int letter_count(char text[500])
{
    int l_count = 0;
    int l = strlen(text);
    for (int i=0; i<l; i++)
    {
        if ((text[i]>='A' && text[i]<='Z') || (text[i]>='a'&& text[i]<='z'))
        {
            l_count++;
        }
    }
    return l_count;

}


int word_count(char text[500])
{
    int w_count = 0;
    int l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (text[i] == ' ')
        {
            w_count++;
        }
    }
    return w_count+1;
}

int sentence_count(char text[500])
{
    int s_count=0;
    int l = strlen(text);
    for (int i=0; i<l; i++)
    {
        if (text[i] == '.' || text[i]== '?' || text[i] == '!')
        {
            s_count++;
        }
    }
    return s_count;
}