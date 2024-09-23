#include <stdio.h>

int pow(int x) {
	int summe = 0, add = 1;
	for (int i = 0; i <= x; i++) {
		summe += add;
		add /= 2;
		
	}
	return summe;
}

int main(void) {
	printf("%d",pow(2));
	int n;
	float x = 1, summe = 0;
	printf("Bitte geben sie eine wie viele Schleifen sie wollen: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {	
		printf("Die hälfte der Fohrehringen zahl ist %f\n", x);
		summe += x;
		x /= 2;

	}
	printf("Die Summe ist %f", summe);
	return 0;
}