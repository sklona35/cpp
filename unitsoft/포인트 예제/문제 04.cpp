#include <cstdio>
#include <ctype.h>

int main() {
	char s[100], *p;
	printf("문자열을 입력하시오:");
	gets(s);
	p=s;
	int i=0;
	while(*(p+i)!=NULL) {
		if(*(p+i)>='a') {
			*(p+i)-=32;
		}
		i++;
	} 
	printf("대문자로 변환한 결과:%s\n",s); 
}
