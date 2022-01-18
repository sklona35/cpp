#define MOD 10007
#include <cstdio>
#include <iostream>
using namespace std;

int dap;

void ejin(int i, int c0, int c1) {
    if(i==0) {
        dap++;
        dap%=MOD;
        return;
    }
    if(c0!=2) ejin(i-1,c0+1,0);
    if(c1!=2) ejin(i-1,0,c1+1);
}

int main() {
    int n;
    cin>>n;
    ejin(n,0,0);
    cout<<dap%MOD;
}
