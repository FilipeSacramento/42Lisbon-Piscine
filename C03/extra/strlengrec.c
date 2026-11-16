#include <stdio.h>

int strlength(char *str, int counter)
{
    if(str[counter] != '\0')
    {
        ++counter;
        return (strlength(str, counter));
    }
    return (counter);
}

int main(void)
{
    char str[] = "Ola boa tarde";
    int counter;

    counter = 0;
    printf ("%d", strlength(str, counter));
}