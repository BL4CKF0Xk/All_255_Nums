#include <stdio.h>

int main(void) {
	int x;

	x = 0;

	do {
		printf("%d\n", x);

		x = x + 1;

	} while (x < 255 );
}
