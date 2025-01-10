#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int anzahl;
	int* N_werte;
	printf("Wie vile ints haettest du gerne: ");
	scanf_s("%d", &anzahl);

	N_werte = (int*)malloc(anzahl * sizeof(int));

	if (N_werte = NULL)
		return;
	
	for (int i = 0; i < anzahl; i++) 
		scanf_s("%d", N_werte+i);

	for (int i = 0; i < anzahl; i++)
		scanf_s("Wert = %d\n", *(N_werte+i));

	

}
