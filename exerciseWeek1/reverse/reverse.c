#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	FILE* in = stdin;

	if (argc > 2){
		fprintf(stderr, "Usage: %s [<file>]\n", argv[0]);
		printf(">2 Argumente");
		exit(EXIT_FAILURE);
	}
	if (argc == 2) {
		in = fopen(argv[1], "r");
		if (!in) {
			perror(argv[0]);
			printf("== 2 Argumente");
			exit(EXIT_FAILURE);
		}
	}
	
	int list[1000];
	int i = 0;
	char buffer[255];
	while (fgets(buffer, 255, in)) {
		list[i] = atoi(buffer);
		i++;
	}

	for (int a = 0; a < i; a++) {
		printf("%d\n", list[a]);
	}
	printf("----\n");
	for (int a = i - 1; a >= 0; a--) {
		printf("%d\n", list[a]);
	}

	
	if (in != stdin) {
		fclose(in);
	}
	exit(EXIT_FAILURE);
}