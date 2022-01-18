#include <cstdio>
#include <iostream>
using namespace std;

int n;

void f(int i) {
    if(i/2==0) {
        cout<<i%2;
        return;
    }
    else {
        f(i/2);
        cout<<i%2;
        return;
    }
}

int main() {
    cin>>n;
    f(n);
}
