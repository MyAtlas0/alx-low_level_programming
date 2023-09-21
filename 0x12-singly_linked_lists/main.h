#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"


/** FUNCTIONS PROTOTYPE **/

int _putchar(char c);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /** MAIN_H **/
