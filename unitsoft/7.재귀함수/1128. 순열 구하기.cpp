#include <cstdio>
#include <iostream>
using namespace std;

int n,r;
char ans[10];
int chck[100];

void print(int x) {
    if(x==r+1) return;
    printf("%c",ans[x]+64);
    print(x+1);
}

void f(int x) {
    if(x==r) {
        print(1);
        cout<<"\n";
        return;
    }
    else {
        for(int i=1;i<=n;i++) {
        	if(chck[i]==0) {
        		chck[i]=1;
            	ans[x+1]=i;
            	f(x+1);
            	chck[i]=0;
            }
        }
    }
}

int main() {
    cin>>n>>r;
    f(0);
}
