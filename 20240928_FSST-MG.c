#include <stdio.h>

void tree(int hight, int stump) {
	
	char star = 42;
	for (int i = 1; i <= hight; i++) {
		for (int j = (hight) - i; j > 0; j--) {
			printf(" ");
		}
		for (int j = 0; j < (i*2-1); j++) {
			printf("%c", star);

		}
		printf("\n");
	}
	for (int i = 0; i < stump; i++) {
		for (int j = 0; j < (hight-1); j++) {
			printf(" ");
		}
		printf("*\n");
	}
		
}

void main() {
	
	int n, n1;
	printf("Bitte geben Sie die Anzahl an Reihen ein: ");
	scanf_s("%d", &n);
	printf("Bitte geben Sie die Anzahl an Reihen fuer den Stumpf ein: ");
	scanf_s("%d", &n1);
	
	tree(n, n1);


}

