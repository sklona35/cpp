#include <cstdio>
#include <cstring>
#include <windows.h>
void print(char *string);
void gotoxy(int x, int y) {
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main() {
	char *pStringStart;
	int nStrlen = 0, i = 0,j;
	char msg[] = "hello world "; //world 뒤에 한칸 띄고 큰따음표 붙여야...
	pStringStart = msg; 
	nStrlen = strlen(pStringStart);
	for(j=0;j<nStrlen;j++) {
		gotoxy(10,5);
		printf("%s",pStringStart+j);
		Sleep(500);
	} 
	return 0;
}
