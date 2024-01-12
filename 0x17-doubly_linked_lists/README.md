					0x17-doubly_linked_lists README File



Last Updated: 13/01/2024;
Contibutor(s): MyAtlas0;


TASKS:

0. Print list
#mandatory

Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example

# Filename: 0-print_dlistint.c





1. List length
#mandatory

Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

# Filename: 1-dlistint_len.c





2. Add node
#mandatory

Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

# Filename: 2-add_dnodeint.c





3. Add node at the end
#mandatory

Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

# Filename: 3-add_dnodeint_end.c
