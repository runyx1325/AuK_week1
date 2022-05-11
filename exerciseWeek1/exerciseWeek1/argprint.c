/*-----------------------------------------------------------------------

  File  : argprint.c

  Author: Stephan Schulz (schulz@eprover.org)

  Contents

  Program that prints the number of command line arguments and the
  arguments.

  Copyright 2021 by the author.

  This code is released under the GNU General Public Licence, version
  2, or, at your choice, any later version. See the file COPYING.

  Created: Tue May  7 11:48:39 CEST 2019

-----------------------------------------------------------------------*/
/*
============================================================================
Name        : argprint.c TODO
Aufgabe     : Woche 1 TODO
Autor       : Luca Antonio Burst TODO
Matrikel    : 4581869 TODO
Version     :
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    char** arg;

    // The first argument to main() is the number of arguments the
    // program was started with - including the name of the program
    // itself at position 0.
    printf("argc: %d\n", argc);
    // argv[] is an array of pointers to the argument strings. The
    // arguments are at positions 0 to argc-1
    for (i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // The C standard also guarantees that the argv-array has one
    // additional entry, which has value NULL. So alternatively we can
    // do the following:
    printf("\nThe same via pointers....\n");
    i = 0;
    for (arg = argv; *arg; arg++)
    {
        printf("Argument %d: %s\n", i++, *arg);
    }
    exit(EXIT_SUCCESS);
}

/*---------------------------------------------------------------------*/
/*                        End of File                                  */
/*---------------------------------------------------------------------*/
