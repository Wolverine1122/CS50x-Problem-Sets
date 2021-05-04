#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); //get the height
    }
    while (n < 1 || n > 8);  //continue until 0<n<9
    for (int i = 1; i <= n; i++) //this functions as a row
    {
        for (int j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int o = 0; o < i; o ++) //reversed side
        {
            printf("#");
        }
        printf("\n"); //insert a new line
    }
}