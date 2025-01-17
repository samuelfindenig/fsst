#include <stdio.h>
#define x 40
#define y 20

void print_Field(char* field) {
	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			if ((i != 0) && (i !=  X - 1) && (j != 0) && (j !=  Y - 1))
				*field = ' ';

			printf("%c", *field);
			field++;
		}
	}
}

char* makeField(const int X, const int Y) {
	static char field[X][Y];
	field[0][0], field[X - 1][0], field[0][Y - 1], field[X - 1][Y - 1] = 201, 187, 200, 188;

	for (int i = 1; i < X - 1; i++) {
		field[i][0], field[i][Y - 1] = 205, 205;
		if (i < Y)
			field[0][i], field[X - 1][i] = 168, 168;

	}
	print_Field(field);
	return field;
}


int main(void) {

	char* filed = makeField(x,y);


	return 0;
}
