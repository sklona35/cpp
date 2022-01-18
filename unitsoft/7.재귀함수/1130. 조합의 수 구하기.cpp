#include <cstdio>
#include <iostream>
using namespace std;

int n,r;

int C(int x, int y) {
    if(y==0 || y==x)  {
        return 1;
    }
    else if(0<y || y<x) {
        return C(x-1,y-1)+C(x-1,y);
    }
}

int main() {
    
    cin>>n>>r;
    
    cout<<C(n,r);
    
}
