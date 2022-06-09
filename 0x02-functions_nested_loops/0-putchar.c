#include <stdio.h>
#include "main.h"

int main() {
	char chars[] = {'_','p','u','t','c','h','a','r'};

	int i = 0;
	while (i<8){
		_putchar(chars[i]);
		i++;
	}
	
	_putchar('\n');

	return 0;
}


/*
int _putchar(char c){
	return (write(1, &c, 1));
}
*/
