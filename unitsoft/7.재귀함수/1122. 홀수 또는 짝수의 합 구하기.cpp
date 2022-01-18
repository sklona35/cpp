#include <cstdio>
#include <iostream>
using namespace std;

int n;

void f1(int i,int k) {
    if(i==n) {
        cout<<k+i;
        return;
    }
    
    else {
        f1(i+2,k+i);
    }
}

int main() {
    cin>>n;
    
    if(n%2==1) f1(1,0);
    else f1(0,0);
}
