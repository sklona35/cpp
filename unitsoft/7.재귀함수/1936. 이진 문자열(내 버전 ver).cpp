#include <cstdio>
#include <iostream>
#define MOD 10007
using namespace std;

int f(int i) {
	if(i==1) return 2;
	else return 2*f(i-1);
}

int main() {
	int n;
	cin>>n;
	if(n>=3) cout<<f(n)-f(n-2);
	else cout<<f(n);
}
