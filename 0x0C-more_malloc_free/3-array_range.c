#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *Esther;
	int tope, i;

	if (min > max)
		return (NULL);

	tope = max - min;
	Esther = malloc((tope + 1) * sizeof(int));
	if (Esther == NULL)
		return (NULL);

	for (i = 0; i <= tope; i++)
		Esther[i] = min++;

	return (Esther);
}
