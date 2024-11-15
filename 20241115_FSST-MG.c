#include <stdio.h>
#include <string.h>

void verschluesselung(char string[], int move) {
	for(int i = 0; i < strlen(string); i++){
		if ((string[i] >= 'A') && (string[i] <= ('Z'-move) )) 
			string[i] += move;
		else		
			string[i] = string[i] + move - 27;
	}
}

void entschluesseln(char string[], int move) {
	verschluesselung(string, 26-move);
}



int main(void){
	
	char string[200];
	gets_s(string, 200);
	verschluesselung(string, 2);
	printf("Verschluesselter Text: \t %s\n", string);
	entschluesseln(string, 2);
	printf("Entschluesselter Text; \t %s\n", string);

	
	

	return 0;
}
