#include <cstdio>
#include <iostream>
using namespace std;

int n;
int arr[22];
int chk[5000000];
int m;

void f(int i, int hap) {
    if(i==n+1) {
        if(chk[hap]==1) return;
        else {
            chk[hap]=1;
            //cout<<hap<<'\n';
            m++;
            return;
        }
    }
    f(i+1,hap+arr[i]);
    f(i+1,hap-arr[i]);
}

int main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
    f(2,1);
    cout<<m;
}
