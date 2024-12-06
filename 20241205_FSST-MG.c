#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* handler;

	int zeichen;

	handler = fopen("L:\\MG\\Testdaten\\Hamburg_Marathon.txt", "r");   

	if (handler == NULL) {
		return 1;
	}

	char slowest_name[100] = {0};
	int slowest_time = 10*3600;

	while (1) {
		char name[255] = {0};
		int time[3];
		int rec = fscanf(handler, "%s %d:%d:%d",name, &time[0], &time[1], &time[2]);

		if (rec == EOF)
			break;
		
		if ((time[0] * 3600 + time[1] * 60 + time[2]) < slowest_time) {
			slowest_time = (time[0] * 3600 + time[1] * 60 + time[2]);
			strcpy(slowest_name, name);

		}
	}

	printf("%s", slowest_name);

	fclose(handler);
}

