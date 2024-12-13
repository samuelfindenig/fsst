#include <stdio.h>
#include <math.h>
typedef unsigned int INT;
typedef struct {
	double x;
	double y;
} POINT;

double calcDistance(POINT p1, POINT p2){
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}


int main(void) {
	INT Hello = 0;
	
	POINT punkt1;
	POINT punkt2;

	punkt1.x = 3;
	punkt1.y = 2.5;
	punkt2.x = 2;
	punkt2.y = -2;

	printf("%lf", calcDistance(punkt1, punkt2));

	return 0;
}
