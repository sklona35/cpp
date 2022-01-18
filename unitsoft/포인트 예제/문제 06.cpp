#include <cstdio>
#include <cstring>

void print(char *s);

int main() {
	char *s = "C-Language";
	int i;
	for(i=strlen(s)-1;i>=0;i--) {
		print(s+i);
	}
	return 0;
}

void print(char *s) {
	printf("%s\n",s);
}
