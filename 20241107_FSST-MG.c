#include <stdio.h>
#include <string.h>

void filter(char qulle[], char ziel[], char filterchar) {
	int abstand = 0, lenQuelle = strlen(qulle);

	for (int i = 0; i < lenQuelle; i++) {
		if (qulle[i] != filterchar) {
			ziel[i - abstand] = qulle[i];
		}
		else {
			abstand++;
		}
	}
}
int contains(char string[], char substrnig[]) {
	int lenstring = strlen(string), lensubstring = strlen(substrnig), nSub = 0;

	for (int i = 0; i <  lenstring; i++) 
		if (string[i] == substrnig[0]) 
			for (int j = 0; j < lensubstring; j++) {
				if (string[i+j] != substrnig[j]) break;
				if (j == lensubstring-1) {
					nSub++;
					i += lensubstring-1;
				}
			}
		
	
	return nSub;
}
int main(void) {
	char qulle[200], substring[100], filterchar = 'e';
	gets_s(qulle, 200);
	gets_s(substring, 100);
	printf("%d", contains(qulle, substring));
	return 0;
}
