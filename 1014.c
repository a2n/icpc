#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool validate(int n0, int n1, int n2, int n3, int n4, int n5)
{
    return (n0 + n1 + n2 + n3 + n4 + n5) % 2 != 0;
}

int main (int argc, char* argv[])
{
    //char * const input = "1 0 1 2 0 0\n1 0 0 0 1 1\n0 0 0 0 0 0";
    unsigned int n0 = 0;
    unsigned int n1 = 0;
    unsigned int n2 = 0;
    unsigned int n3 = 0;
    unsigned int n4 = 0;
    unsigned int n5 = 0;
    unsigned int line = 0;
    unsigned int sum = 0;

    /*
     * TODO
     * Save all the input util 0 0 0 0 0 0, then process it.
     */
    scanf("%d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5);
    sum = n0 + n1 + n2 + n3 + n4 + n5;
    while (sum > 0) {
	printf("Collection: #%d\n", line + 1);
	if (sum % 2 == 0) {
	    printf("Can be divided.\n\n");
	} else {
	    printf("Can't be divided.\n\n");
	}

	scanf("%d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5);
	sum = n0 + n1 + n2 + n3 + n4 + n5;
	++line;
    }

    return EXIT_SUCCESS;
}
