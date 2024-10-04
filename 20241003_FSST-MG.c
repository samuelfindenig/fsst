#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int von, int bis) {
	return rand() % (bis - von) + von + 1;
}

int InArry(int n, int arry[], int prufen) {
	for (int i = 0; i < n; i++) {
		if (arry[i] == prufen)
			return NULL;
	}
	return 1;
}

void lottozahlen(void) {
	int n_tips;
	printf("Bitte geben sie ein wie viele Tips sie wollen: ");
	scanf_s("%d", &n_tips);

	for (int i = 0; i < n_tips; i++) {
		int lottozahlen[7] = {0}, zahl = 0;

		while (zahl < 7) {
			int num = randint(1, 45);
			if (InArry(7, lottozahlen, num) == 1) {
				lottozahlen[zahl] = num;
				zahl++;
			}
		}

		for (int j = 0; j < 7; j++) {
			printf("%d\t", lottozahlen[j]);
		}
		printf("\n");
	}
}

int main(void) {
	srand(time(0));
	
	lottozahlen();

	return 0;
}