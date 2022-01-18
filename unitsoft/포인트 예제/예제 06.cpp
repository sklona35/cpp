#include <cstdio>
#define row 2
#define col 4
int main() {
	int a[row][col] = {{1,2,3,4},{5,6,7,8}};;
	int i, *pa;
	pa=&a[0][0];
	for(int i=0;i<row*col;i++) {
		printf("%d", *(pa+i));
	}
} 
