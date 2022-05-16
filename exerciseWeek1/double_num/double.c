/************************************************/
/***File:            double.c                ***/
/***Matrikelnummer : 4581869                  ***/
/***Description:     Doubling List of numbers ***/
/************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	
	FILE* in = stdin;

	if (argc > 2) {
		fprintf(stderr, "Usage: %s [<file>]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if (argc == 2) {
		in = fopen(argv[1], "r");
		if (!in) {
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
	}

	char buffer[255];
	while (fgets(buffer, 255, in)) {
		printf("%d\n", 2*atoi(buffer));
	}

	if (in != stdin) {
		fclose(in);
	}
	exit(EXIT_FAILURE);

	
}