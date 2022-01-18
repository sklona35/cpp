#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n;

void f(int j, int k, int i) {
    if(i==n) {
        cout<<j+k;
        return;
    }
    else {
        f(j+k,j,i+1);
    }
}

int main() {
    cin>>n;
    f(0,1,0);
}
