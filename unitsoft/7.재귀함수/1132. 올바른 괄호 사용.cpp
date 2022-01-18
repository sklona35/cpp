#include <cstdio>
#include <iostream>
using namespace std;

int n;
int arr[22];

void prt(int i) {
    if(i==n*2) return;
    printf("%c",arr[i]+40);
    prt(i+1);
}

void f(int i, int x, int k, int chck) {
    if(k==n) {
    	//cout<<1;
        prt(0);
        puts("");
        return;
    }
    if(chck==0) {
        //cout<<x+k+1<<" ";
        //cout<<k;
        arr[i]=0;
        if(x+k+1==n) f(i+1,x+1,k,1);
        else f(i+1,x+1,k,0);
        //cout<<"\n";
    }
    if(x>0) {
        //cout<<")";
        //cout<<k;
        arr[i]=1;
        f(i+1,x-1,k+1,chck);
        //cout<<"\n";
    }
}

int main() {
    cin>>n;
    f(0,0,0,0);
}
