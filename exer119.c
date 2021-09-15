
/* utiliza la funcion para invertir todas las lineas de un texto */

#include <stdio.h>
#include "functions.h"
#define MAX_SIZE 1000


int main(int argc, char const *argv[])
{
    char c = getchar();
    char line [MAX_SIZE];
    char res [MAX_SIZE];
    int len = 0;

    while (c != EOF){
        len = getLine(line,MAX_SIZE);
        reverse (line,res);

    }
    printf("%s",res );
    return 0;
}
