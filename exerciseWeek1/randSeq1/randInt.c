#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	for (int i = 0; i < atoi(argv[1]); i++) {
		int value = rand() % atoi(argv[2]);
		printf("%d\n", value);
	}
}