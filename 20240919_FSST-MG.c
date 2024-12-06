#include <stdio.h>
#include <math.h>

int program3(void) {
	for (int i = 1; i <= 32; i++) {
		printf("%i \t %.0lf\n", i, pow(2, i));
	}
}

int program2(void) {
	double f = 0.5f;
	
	while (f != 0.0) { //Flieskommazahlen k�nnen nie so Abgefragt werden
		f -= 0.1;
		printf("\n %f", f); 
	}
	return 0;
}

int program1(void) {
	int s[2], lampe1 = 1;
	float r;

	for (int i = 0; i < 2; i++) {
		printf("Schalter %d  ", i + 1);
		scanf_s("%i", &s[i]);
	}
	printf("Poti: ");
	scanf_s("%i", &r);
	
	if ((r <= 100 && r >= 20) && (s[0] == 1 || s[1] == 1)) lampe1 = 0;

	printf("Lampe = %d", lampe1);


	return 0;
}

int main(void) {
	program3();
	return 0;
}

