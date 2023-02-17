#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct rectangle {
	int xpos;
	int ypos;
} Rectangle;

int CalculateArea(Rectangle* a, Rectangle* b) {
	int width = b->xpos - a->xpos;
	int height = b->ypos - a->ypos;

	return abs(width) * abs(height);
}

void showPoint(Rectangle* a, Rectangle* b) {
	printf("1: %3d %3d\n", a->xpos, a->ypos);
	printf("2: %3d %3d\n", a->xpos, b->ypos);
	printf("3: %3d %3d\n", b->xpos, a->ypos);
	printf("4: %3d %3d\n", b->xpos, b->ypos);
}

int main(void) {
	Rectangle pos1 = { -50, -50 };
	Rectangle pos2 = { 50, 50 };

	printf("직사각형의 넓이: %d\n", CalculateArea(&pos1, &pos2));
	printf("네 점의 좌표정보\n");
	showPoint(&pos1, &pos2);
}