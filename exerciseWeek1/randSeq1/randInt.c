/************************************************/
/***File:            randInt.c                ***/
/***Matrikelnummer : 4581869                  ***/
/***Description:     Generates random numbers ***/
/************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	//Output of random numbers
	for (int i = 0; i < atoi(argv[1]); i++) {
		int value = rand() % (atoi(argv[2]) + 1);
		printf("%d\n", value);
	}
}