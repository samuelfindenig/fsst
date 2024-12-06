#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char verschluesselung(char string, int move) {
	if (string <= ('}' - move)) 
		return string + move;
	return string + move - 94;
}

char entschluesseln(char string, int move) {
	return verschluesselung(string, 94-move);
}


void open_decode_close(char from[], char to[], int offset) {
	FILE* handler;
	FILE* handler2;
	int zeichen;

	handler = fopen(from, "r");
	handler2 = fopen(to, "w");

	if (handler == NULL || handler2 == NULL) {
		return 1;
	}

	while (1) {
		zeichen = fgetc(handler);
		if (zeichen == EOF)
			break;
		fputc(entschluesseln(zeichen, offset), handler2);
	}

	fclose(handler);
	fclose(handler2);

}

int main(void) {
	open_decode_close("C:\\Users\\Samuel Findenig\\Desktop\\fsst.txt", 
					  "C:\\Users\\Samuel Findenig\\Desktop\\output.txt", 1);

	return 0;
}
