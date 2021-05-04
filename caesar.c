#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //we ensure that there is a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //finished


    //we ensure that we take an integer for the argument
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //finished


    int key = atoi(argv[1]); //convert a string to an int

    if (key > 0) //we also ensure that the integer is non-negative
    {
        string input = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int n = 0, p = strlen(input); n < p; n++)
        {
            if (isupper(input[n]))
            {
                while (key > 26)
                {
                    key = key % 26;
                }
                if ((input[n] + key) > 90)
                {
                    char s = input[n] + key - 90;
                    printf("%c", s + 64);
                }
                else
                {
                    printf("%c", input[n] + key);
                }
            }

            else if (islower(input[n]))
            {
                while (key > 26)
                {
                    key = key % 26;
                }
                if ((input[n] + key) > 122)
                {
                    char s = input[n] + key - 122;
                    printf("%c", s + 96);
                }
                else
                {
                    printf("%c", input[n] + key);
                }
            }

            else //if character is neither uppercase nor lowercase, we print it as it is
            {
                printf("%c", input[n]);
            }
        }
        printf("\n");
    }
}