#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,mx;

void f(int j) {
    if(j==n) {
        mx++;
        return;
    }
    else if(j>n) return;
    else{
        f(j+1);
        f(j+2);
        f(j+3);
    }
    return;
    
}

int main() {
    cin>>n;
    f(0);
    cout<<mx;
}
