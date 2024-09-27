#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int from, int to) {
	return (rand() % (to - from)) + from + 1;
}

int fib(int suche) {
	if (suche <=2) return 1;
	else return fib(suche - 1) + fib(suche -2);
}

int Fib(int x) {
	int a = 1, b = 1;
	for (int i = 0; i < x; i++) {
		//printf("%d", a);
		a = b;
		b = a + b;
		

	}
	return a;
}
int main(void) {
	// srand(time(NULL));
	for (int i = 1; i < 21; i++) {
	//	printf("%d\n", fib(i));
	}
	printf("%d", Fib(4));


}