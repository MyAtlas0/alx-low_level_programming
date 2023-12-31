#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/** Prototype function **/

int _putchar(char c);
int **alloc_grid(int width, int height);
int count_words(char *str);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);

void free_grid(int **grid, int height);
void print_tab(char **tab);

#endif
/** MAIN_H **/
