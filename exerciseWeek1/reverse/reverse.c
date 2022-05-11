#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	FILE* in = stdin;

	if (argc > 3) {
		fprintf(stderr, "Usage: %s [<file>]\n", argv[0]);
		printf(">2 Argumente");
		exit(EXIT_FAILURE);
	}
	if (argc == 3) {
		in = fopen(argv[1], "r");
		if (!in) {
			perror(argv[0]);
			printf("== 2 Argumente");
			exit(EXIT_FAILURE);
		}
	}
	char buffer[255];
	int counter = 0;
	int sortList[10000];

	while (fgets(buffer, 255, in) && counter < atoi(argv[2])) {
		sortList[counter] = 2 * atoi(buffer);
		printf("%d\n",sortList[counter]);
		counter++;
	}
	printf("------\n");

	for (int i = atoi(argv[2]) - 1; i >= 0; i--) {
		printf("%d\n", sortList[i]);
	}

	
	if (in != stdin) {
		fclose(in);
	}
	exit(EXIT_FAILURE);
}