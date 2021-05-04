#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int step1 = 0;
    int step2 = 0;
    int step3 = 0;

    long i = get_long("Number: ");
    //every other digit, starting with the number’s second-to-last digit
    int p = (i % 100) / 10;
    int o = (i % 10000) / 1000;
    int u = (i % 1000000) / 100000;
    int y = (i % 100000000) / 10000000;
    int t = (i % 10000000000) / 1000000000;
    int r = (i % 1000000000000) / 100000000000;
    int e = (i % 100000000000000) / 10000000000000;
    int w = (i % 10000000000000000) / 1000000000000000;
    //finished

    //every other digit, starting with the number's last digit
    int q = (i % 10);
    int a = (i % 1000) / 100;
    int s = (i % 100000) / 10000;
    int d = (i % 10000000) / 1000000;
    int f = (i % 1000000000) / 100000000;
    int g = (i % 100000000000) / 10000000000;
    int h = (i % 10000000000000) / 1000000000000;
    int j = (i % 1000000000000000) / 100000000000000;
    //finished

    //checking if the multiplication by 2 results in a two-digit number
    //if it does, then split them into 2 one-digit numbers
    if (p * 2 >= 10)
    {
        int p1 = ((p * 2) % 100) / 10;
        int p2 = (p * 2) % 10;
        step1 = p1 + p2;
    }
    else
    {
        step1 = p * 2;
    }

    if (o * 2 >= 10)
    {
        int o1 = ((o * 2) % 100) / 10;
        int o2 = (o * 2) % 10;
        step1 = step1 + o1 + o2;
    }
    else
    {
        step1 = step1 + (o * 2);
    }

    if (u * 2 >= 10)
    {
        int u1 = ((u * 2) % 100) / 10;
        int u2 = (u * 2) % 10;
        step1 = step1 + u1 + u2;
    }
    else
    {
        step1 = step1 + (u * 2);
    }

    if (y * 2 >= 10)
    {
        int y1 = ((y * 2) % 100) / 10;
        int y2 = (y * 2) % 10;
        step1 = step1 + y1 + y2;
    }
    else
    {
        step1 = step1 + (y * 2);
    }

    if (t * 2 >= 10)
    {
        int t1 = ((t * 2) % 100) / 10;
        int t2 = (t * 2) % 10;
        step1 = step1 + t1 + t2;
    }
    else
    {
        step1 = step1 + (t * 2);
    }

    if (r * 2 >= 10)
    {
        int r1 = ((r * 2) % 100) / 10;
        int r2 = (r * 2) % 10;
        step1 = step1 + (r1 + r2);
    }
    else
    {
        step1 = step1 + (r * 2);
    }

    if (e * 2 >= 10)
    {
        int e1 = ((e * 2) % 100) / 10;
        int e2 = (e * 2) % 10;
        step1 = step1 + e1 + e2;
    }
    else
    {
        step1 = step1 + (e * 2);
    }
    if (w * 2 >= 10)
    {
        int w1 = ((w * 2) % 100) / 10;
        int w2 = (w * 2) % 10;
        step1 = step1 + w1 + w2;
    }
    else
    {
        step1 = step1 + (w * 2);
    }
    //process is over

    step2 = step1 + q + a + s + d + f + g + h + j; //add that sum to the sum of the digits that weren’t multiplied by 2

    //if everything works, check if the type of the card is MasterCard
    if ((step2 % 10 == 0) && (i / 100000000000000 == 51))
    {
        printf("MASTERCARD\n");
    }
    else if ((step2 % 10 == 0) && (i / 100000000000000 == 52))
    {
        printf("MASTERCARD\n");
    }
    else if ((step2 % 10 == 0) && (i / 100000000000000 == 53))
    {
        printf("MASTERCARD\n");
    }
    else if ((step2 % 10 == 0) && (i / 100000000000000 == 54))
    {
        printf("MASTERCARD\n");
    }
    else if ((step2 % 10 == 0) && (i / 100000000000000 == 55))
    {
        printf("MASTERCARD\n");
    }
    //finished doing that


    //if everything works, check if the type of the card is American Express
    else if ((step2 % 10 == 0) && (i / 10000000000000 == 34))
    {
        printf("AMEX\n");
    }
    else if ((step2 % 10 == 0) && (i / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    //finished the process

    //check if the card is VISA
    else if ((step2 % 10 == 0) && (i / 1000000000000 == 4))
    {
        printf("VISA\n");
    }
    else if ((step2 % 10 == 0) && (i / 1000000000000000 == 4))
    {
        printf("VISA\n");
    }
    //finished doing that

    //if none works, print INVALID
    else
    {
        printf("INVALID\n");
    }


}