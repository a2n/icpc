#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
    /* 0.43 ^ 2 = 0.1849
     * 0.43 ^ 3 = 0.079507
     *
     * 1.43 ^ 2 = 2.0449
     * 1.43 ^ 3 = 2.9224207
     *
     * 12.43 ^ 2 = 154.5049
     * 12.43 ^ 3 = 1920.495907
     */

    char *R = "12.43";
    int n = 3;

    //scanf ("%s, %d", R, &n);

    size_t rlen = strlen (R);

    int **M = malloc (sizeof (int*) * rlen);
    size_t tmp;
    for (tmp = 0; tmp < rlen; tmp++)
	M[tmp] = malloc (sizeof (int) * rlen);

    int i = rlen - 1;
    int j = rlen - 1;

    int mi = 0;
    int mj = 0;

    while (i >= 0) {
	if (R[i] == '.') {
	    printf ("Buggy: %c [i: %d]\n", R[i], i);
	    --i;
	}

	printf ("Row %d\n", i);
	while (j >= 0) {
	    if (R[j] == '.') {
		printf ("    Buggy: %c [j: %d]\n", R[j], j);
		--j;
	    }

	    char *si = "9";
	    char *sj = "9" 

	    sprintf (si, "%c%c", R[i], '\0');
	    sprintf (sj, "%c%c", R[j], '\0');

	//printf ("\ti: %c [%d], j: %c [%d]\n", R[i], atoi (&R[i]), R[j], atoi (&R[j]));
	    // XXX: adv = M[mi][mj] / 10; M[mi][mj] %= 10;
	    M[mi][mj] = atoi (si) * atoi (sj);
	    printf ("\t%s * %s = %d\n", si, sj, M[mi][mj]);
	    --j;
	}
	printf ("\n-------------\n");
	j = rlen - 1;
	--i;
    }

    return EXIT_SUCCESS;
}

