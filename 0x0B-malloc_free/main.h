char **strtow(char *str);
char *argstostr(int ac, char **av);
#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);

