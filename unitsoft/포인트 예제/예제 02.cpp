#include <cstdio> 
int main() {
	char c = 'A';
	char *cp = &c;
	printf("%c %c\n", c, *cp);
	printf("%d %d\n", sizeof(char), sizeof(char*));
	printf("%d %d\n", sizeof(c), sizeof(*cp));
} 
