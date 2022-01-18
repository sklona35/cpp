#include <cstdio>
#include <iostream>
using namespace std;

char arr[22];
int n, ans=0;
int idx=0;

void fr(int i) {
	
	printf("%s\n",arr);
	return ;
	
}

void f(int n,int c0,int c1) {
	if(n==0) {
		ans++;
		fr(1);
		return;
	}
	if(c0==2) {
		arr[idx++] = '1';
		f(n-1,0,c1+1);
		idx--;
	}
	else if(c1==2) {
		arr[idx++] = '0';
		f(n-1,c0+1,0);
		idx--;
	}
	else {
		arr[idx++] = '1';
		f(n-1,0,c1+1);
		idx--;
		arr[idx++] = '0';
		f(n-1,c0+1,0);
		idx--;
	}
}

int main() {
	cin>>n;
	f(n,0,0);
	cout<<ans; 
} 
