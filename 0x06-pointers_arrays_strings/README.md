	_ 0x06-pointers_arrays_strings README file _

last updated: 23/08/2023
contributor(s): MyAtlas0

list of tasks for current directory and descriptions:

TASKS:
0. strcat

mandatory
Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);

This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and
Adds a terminating null byte
Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

File: 0-strcat.c


1. strncat

mandatory
Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);

The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

File: 1-strncat.c


2. strncpy

mandatory
Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);

Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

File: 2-strncpy.c


3. strcmp

mandatory
Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);

Your function should work exactly like strcmp
FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

File: 3-strcmp.c


4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

mandatory
Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array

File: 4-rev_array.c



{TO_ BE_ UPDATED}
