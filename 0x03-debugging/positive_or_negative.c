#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Positive or Negative - print sign of random number
 * @void: Empty parameter list for main.
 *
 * Description: this if/else statement declares the sign (positive
 * or negative) of a random number. It also states if the value
 * is zero.
 * 
 * @n - an integer parameter to recieve a number for test
 * Return: 0 for success
*/
int positive_or_negative(int n)
{

        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }

        return (0);
}

