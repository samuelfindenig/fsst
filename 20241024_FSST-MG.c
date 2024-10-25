#include <stdio.h>
#include <string.h>
#define MaxPasswordLen 200

int check(char passsword[], int max, int bis) {
	for (int i = 0; i<=strlen(passsword); i++)
		if ((passsword[i] <= max) && (passsword[i] >= bis))
			return 1;
	return 0;
}

void enterPassword(char password[]) {
	for (int i = 0; i <= 255; i++){
		char charakter = getch();
		
		if (charakter == 13) {
			password[i] == 0;
			printf(" \n");
			break;
		}
		password[i] = charakter;
		charakter = '*';
		printf("%c", charakter);
	}
}


void checkPassword(char password[]) {
	
	printf("Please enter a Password: ");	
	while (1) {
		enterPassword(password);
		if ((check(password, 90, 41) == 1)	&&
			(check(password, 122, 61) == 1) &&
			(check(password, 57, 48) == 1)	&&
			((check(password, 47, 33) == 1) || (check(password, 64, 60) == 1) || (check(password, 96, 91) == 1) || (check(password, 126, 123) == 1)) &&
			(strlen(password) > 7)) {
			printf("Strong Password!");
			break;
		}
		printf("Password not Secoure! Pleas reenter: ");
	}
}


int main(void) {

	char password[MaxPasswordLen] = { 0 };
	checkPassword(password);

	return 0;
}
