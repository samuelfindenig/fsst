#include <stdio.h>

int main(void) {
	

	//Kleine 1 x 1
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			printf("%d \t", j* i);
		}
		printf("\n");
	}


	printf("\n\n");

	// Schachbrett
	for (int i = 1; i < 11; i++) {
		for (int j = 65; j < 73; j++) {
			printf("%c%d \t", j, i);
		}
		printf("\n");
	}
		


	return 0;
}