#include <stdio.h>
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