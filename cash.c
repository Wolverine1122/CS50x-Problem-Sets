#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Cash owed: ");//get the amount
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    int quarters = cents / 25; //# of quarters in dollars
    int dimes = (cents - quarters * 25) / 10; //# of dimes after quarters are taken
    int nickels = (cents - quarters * 25 - dimes * 10) / 5; //# of nickels after dimes and quarters are taken
    int pennies = (cents - quarters * 25 - dimes * 10 - nickels * 5) / 1; //#of pennies after dimes, quarters, and nickels are taken

    int i = quarters + dimes + nickels + pennies;

    printf("%i\n", i); //print the number of coins
}