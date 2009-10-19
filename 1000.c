#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    unsigned int a;
    unsigned int b;

    scanf ("%d %d", &a, &b);
    printf ("%d\n", a + b);

    return EXIT_SUCCESS;
}

