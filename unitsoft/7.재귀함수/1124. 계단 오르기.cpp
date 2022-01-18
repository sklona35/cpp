#include <cstdio>
#include <iostream>
using namespace std;

int n,mx;

void f(int i) {
    if(i==n) {
        mx++;
        return;
    }
    else if(i>n) return;
    else {
        f(i+1);
        f(i+2);
        f(i+3);
        return;
    }
}

int main() {
    cin>>n;
    
    f(0);
    cout<<mx;
}
