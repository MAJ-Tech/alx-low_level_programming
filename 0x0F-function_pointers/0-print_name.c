#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that print a string using function pointers.
 * @name: String (name) to be rinted.
 * @f: A pointer to function, that take string as an argument and print it.
 * Return: void (has no returing value.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
