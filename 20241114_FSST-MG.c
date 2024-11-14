#include <stdio.h>
#include <string.h>


int endsIn(char email[], char ending[]) {
	int lenEnding = strlen(ending)-1, lenEmail = strlen(email)-1;
	for (int i = 0; i <= lenEnding; i++)
		if (email[lenEmail-i] != ending[lenEnding-i])
			return 0;
	return 1;
}

void enter_and_check_email(char email[]) {
	printf("Pleas Enter a E-Mail Address: ");
	gets_s(email, 200);
	int isTrue = 1;

	while (isTrue){
		int len = strlen(email);
		if ((number_of_ats(email) != 1) || (email[0] == '@') || (email[len - 4] == '@') || 
			(endsIn(email, ".at") == 0)) {

			printf("Not Vaild !!\ Please Reenter: ");
			for (int i = 0; i < len; i++)
				email[i] = 0;
			gets_s(email, 200);

		}
		else
			isTrue = 0;
		
	}
	printf("E-Mail is Valid");
 }



int number_of_ats(char email[]) {
	int count = 0;
	for (int i = 0; i < strlen(email); i++)
		if (email[i] == '@')
			count++;
		return count;
}


int main(void) {
	char email[200];
	enter_and_check_email(email);
	
	return 0;
}
