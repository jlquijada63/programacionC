#include <stdio.h>
#include <string.h>
#include "functions.h"
#define MAX_SIZE_BUFFER 1000

/* funcion auxiliar getLine que recoge una linea de texto. Devuelve el numero de caracteres leidos*/

int getLine(char *line, int maxline)
{
    char c = getchar();
    int i = 0;
    while (c != '\n')
    {
        line[i] = c;
        ++i;
        c = getchar();
    }
    line[i] = '\0';
    return i;
}

/* funcion que elimina los blancos al final de una linea */
void deleteBlanks(char *line, int length)
{

    int i = 0;
    while (line[i] != '\0')
    {
        ++i;
    }
    while (line[i - 1] == ' ')
    {
        line[i - i] = '\0';
        --i;
    }
}

/* funcion que reverses un character string */

void reverse(char *s, char *res)
{

    for (int i = 0; i < strlen(s); ++i)
    {

        res[(strlen(s) - 1) - i] = s[i];
    }
}

int main(int argc, char const *argv[])
{
    char string[MAX_SIZE_BUFFER];
    char result[MAX_SIZE_BUFFER];

    int len = getLine(string, MAX_SIZE_BUFFER);
    reverse(string, result);
    for (int i = 0; i < len; i++)
    {
        putchar(result[i]);
    }
    return 0;
}
