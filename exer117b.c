
/* imprime solo lineas de mas de 60 caracteres */

#include <stdio.h>
#include <string.h>
#define MAX_STRING_LEN 100

int main(int argc, char const *argv[])
{
    char buffer[MAX_STRING_LEN];
    int i = 0;
    char c = getchar();
    while (c != EOF)
    {
        buffer[i] = c;
        c = getchar();
        ++i;
    }
    if (strlen(buffer) > 40)
    {
        printf("%s", buffer);
        }
}
