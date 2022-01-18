#include <cstdio>
#include <iostream>
using namespace std;

void fibo(int f, int s, int hap) {
	if(hap>4000000) {
		cout<<hap;
		return;
	}
	if(s%2==0) fibo(s,f+s,hap+s);
	else fibo(s,f+s,hap);
}

int main() {
	fibo(1,2,0);
}
