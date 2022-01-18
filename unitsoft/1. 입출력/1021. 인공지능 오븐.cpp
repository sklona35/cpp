#include <cstdio>

int main() {
	int h,m,s,d;
	scanf("%d %d %d %d",&h,&m,&s,&d);
	h+=d/3600;
	d%=3600;
	m+=d/60;
	d%=60;
	s+=d%60;
	if(s>=60) {
		s-=60;
		m++;
	}
	if(m>=60) {
		m-=60;
		h++;
	}
	if(h>=24) h-=24;
	printf("%d %d %d",h,m,s);
} 
