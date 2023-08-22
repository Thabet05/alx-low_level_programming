#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
<<<<<<< HEAD
{
	int i;

        i = 0;
        
        while(*s != '\0')
=======
{       
        int i;

i = 0;

while(*s != '\0')
>>>>>>> 8dfb00aba60e11f1c43b178e07e990ad57d188c3
        {
                i++;
                s++;
        }

        return(i);
}
