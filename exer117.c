
/* write a program to print all input that are longer than 80 characters */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int counter = 0;
    char c;
    c = getchar();
    while (c != EOF)
    {
        while (c != '\n')
        {
            ++counter;
            c = getchar();
        }
        if (counter > 60)
        {
            putchar(c);
        }
    }
}
