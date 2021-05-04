#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2) //making sure that we have the key
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    int length = strlen(argv[1]);
    if (length != 26) //making sure that there are only 26 characters in the key
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //making sure that all characters in the key are letters
    for (int i = 0; i < length; i++)
    {
        if (isalpha(argv[1][i]))
        {
            true;
        }
        else
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    //finished

    //making sure that we have unique 26 letters in the key
    for (int o = 0; o < length; o++)
    {
        for (int j = o + 1; j < length ; j++)
        {
            if (argv[1][o] == argv[1][j])
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }

    }
    //finished

    string input = get_string("plaintext: ");
    printf("ciphertext: ");

    //replacing characters in input with letters in key and not changing characters that are not letters
    for (int d = 0, input_length = strlen(input); d < input_length; d++)
    {
        if (isupper(input[d])) //for uppercase letters in input
        {
            int n = input[d] - 65;
            printf("%c", toupper(argv[1][n]));
        }
        else if (islower(input[d])) //for lowercase letters in input
        {
            int m = input[d] - 97;
            printf("%c", tolower(argv[1][m]));
        }
        else //not changing anything if it is not a letter
        {
            printf("%c", input[d]);
        }
    }
    //finished

    printf("\n");
    return 0;
}