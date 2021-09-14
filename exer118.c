
/* write a program to remove trailing blanks and tabs from each line of input, and delete entirely blank lines */

#include <stdio.h>

#define MAX_SIZE_BUFFER 1000

/* funcion auxiliar getLine que recoge una linea de texto */

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
    return i;
}

/* probando la funcion */

int main(int argc, char const *argv[])
{
    char buffer[MAX_SIZE_BUFFER];
    int aux = getLine(buffer, MAX_SIZE_BUFFER);
    for (int i = 0; i < aux; i++)
    {
        putchar(buffer[i]);
    }

    return 0;
}
