#include <cstdio>
#include <ctype.h>

int main() {
	char s[100], *p;
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(s);
	p=s;
	int i=0;
	while(*(p+i)!=NULL) {
		if(*(p+i)>='a') {
			*(p+i)-=32;
		}
		i++;
	} 
	printf("�빮�ڷ� ��ȯ�� ���:%s\n",s); 
}
