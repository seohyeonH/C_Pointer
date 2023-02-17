#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* a, Point* b) {
	Point p = *a;
	*a = *b;
	*b = p;
}

int main(void) {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);

	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);

}