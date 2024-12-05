#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* handler;      
	FILE* handler2;

	int zeichen;

	handler = fopen("u:\\hello.txt", "r");   // r...read only

	if (handler == NULL) {
		return 1;
	}


	handler2 = fopen("filename.txt", "w");  // w...write (a...append)

	if (handler2 == NULL) {
		fclose(handler);   
		return 1;
	}

	do {
		zeichen = fgetc(handler);    
		if (zeichen != EOF) {
			if (zeichen >= 'a' && zeichen <= 'z') 
				zeichen = zeichen - ('a' - 'A');         
			
			fputc(zeichen, handler2); 
		}
	} while (zeichen != EOF);        

	fclose(handler);
	fclose(handler2);  



