#include <cstdio>
#include <iostream>
using namespace std;

int n,m;

int f(int i, int j) {
    if(j==m) return i;
    else {
        return f(i*n,j+1);
    }
}

int main() {
    cin>>n>>m;
    cout<<f(n,1);
}
