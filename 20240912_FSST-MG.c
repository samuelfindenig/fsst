#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	srand(time(0));
	int zz = zufalszahl(1, 10);
	printf("Zufalszahl: %i", zz);
}

int zufalszahl(int von, int bis) {
	return (rand() % (bis - von)) + von + 1;
}