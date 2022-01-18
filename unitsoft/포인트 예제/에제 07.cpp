#include <cstdio>
void swap_value(int x, int y);
void swap_address(int *x, int *y);

int main() {
	int x=100, y=200;
	printf("In main: x = %d,  y = %d\n\n", x, y);
	swap_value(x, y);
	printf("In main: x = %d, y = %d(swap_value 호출 후)\n\n", x, y);
	swap_address(&x, &y);
	printf("In main: x = %d, y = %d(swap_address 호출 후)\n\n", x, y);
	return 0;
}

void swap_value (int x, int y) {
	int temp= x;
	x = y;
	y = temp;
	printf("In swap_value: x = %d, y = %d\n\n", x, y);
}

void swap_address(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap_address: x = %d, y = %d\n\n", *x, *y);
}
