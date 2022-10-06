#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Appointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int I, j, k ;
char *s;
if (s1 ==NULL)
  i=0;
else
{for (i=0; s1[i]; i++)
                ;
}
if (s2 ==NULL)
  i=0;
else
{
for (j=0 ; s2[j]; j++)
       ;
}
if (j > n)
j = n ;
s= malloc(sizeof(char)* (i+j +1);
if (s==NULL)
return(NULL);
for (k=0; k<i ; k++)
s[k + i] =s2[k];
s[i + j] ='\0';
return(s);
}
