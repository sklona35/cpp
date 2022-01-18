#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int mx=0;
	for (int i=1; i<1000;i++) {
		if(i%3==0 || i%5==0) {
			mx=mx+i;
		}
	}
	cout<<mx;
}
