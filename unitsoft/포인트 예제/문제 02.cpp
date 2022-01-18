#include <cstdio>
#include <string>

int main () {
	const char *a = "ABCDEFGHIJKLMN";
	
	for(int i=13;i>=0;i--) {
		for(int j=0;j<i;j++) {
			printf(" ");
		} 
		for(int j=i;j<=13;j++) {
			printf("%c",*(a+j));
		}
		printf("\n");
	}
}
