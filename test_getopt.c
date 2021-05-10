/*
 *-------------------------------------------------------------------
 * Description: Program to test getopt(3).
 * Author: James Hunt <jamesodhunt@gmail.com>
 * Notes:
 *
 * Try running as:
 *
 *   $ ./test_getopt "ab:" -a -b "hello world"
 *
 *-------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <assert.h>

extern char *optarg;
extern int optind, opterr, optopt;

int
main(int argc, char *argv[])
{
    /* Save the program name and getopt optstring we'll use */
    char *program_name = argv[0];
    char *getopt_optstring = argv[1];

    /* Remove one argument */
    argc--;

    /* Jump over program name */
    argv++;

    /* Overwrite the new start of the array (which used to be the
     * getopt_optstring value) with the program name.
     */
    argv[0] = program_name;

    int option;

    /* Call getopt using our saved optstring value */
    while ((option = getopt(argc, argv, getopt_optstring)) != -1)
    {
        printf ("INFO: getopt option: '%c' "
                "(optarg: '%s', optind: %d, opterr: %d, optopt: %d)\n",
                option,
                optarg ? optarg : "",
                optind,
                opterr,
                optopt);

    }

    for (int i=0; i < argc; i++)
    {
        printf("argv[%d]: '%s'\n", i, argv[i] ? argv[i] : "");
    }

    exit(EXIT_SUCCESS);
}
