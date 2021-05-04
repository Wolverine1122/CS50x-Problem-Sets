#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    float sum_letters = 0;
    float sum_words = 1;
    float sum_sentences = 0;

    for (int j = 0; j < strlen(text); j++)
    {
        //count the number of letters in the given text
        if ((text[j] >= 'a' && text[j] <= 'z') || (text[j] >= 'A' && text[j] <= 'Z'))
        {
            sum_letters ++;
        }

        //count the number of words in the given text
        if (text[j] == ' ')
        {
            sum_words ++;
        }

        //count the number of sentences
        if ((text[j] == '.') || (text[j] == '!') || (text[j] == '?'))
        {
            sum_sentences ++;
        }
    }

    float L = 100 * (sum_letters / sum_words); //average number of letters per 100 words in the text
    float S = 100 * (sum_sentences / sum_words); //average number of sentences per 100 words in the text

    float index = 0.0588 * L - 0.296 * S - 15.8; //readability test is from the Coleman-Liau index

    int result = round(index);

    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }
}