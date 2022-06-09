#include <stdio.h>
#include "main.h"
/** 
 * main - main function entry
 *
 * Return: always returns 0
 */

int main(void)
{
	char chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int i = 0;

	while (i < 8)
	{
		_putchar(chars[i]);
		i++;
	}
		_putchar('\n');

	return (0);
}

