#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Find the end of the dest string */
    while (*dest)
    {
        dest++;
    }

    /* Copy the src string to dest */
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add the terminating null byte */
    *dest = '\0';

    return ptr;
}
