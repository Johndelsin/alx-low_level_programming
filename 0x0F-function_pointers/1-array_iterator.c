#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * parameter on each element of an array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
