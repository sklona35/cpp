#include <cstdio>
#include <cstdlib>

void change(int sec, int *s, int *m, int *h)
{
	*s=sec%60;
	*m=sec/60;
	*h=(sec/60)/60;
}

int main() {
	int sec, s, m, h;
	printf("insert the sencond");
	scanf("%d",&sec);
	change(sec,&s, &m, &h);
	printf("%d�ð� %d��%d��\n", h, m, s);
}
