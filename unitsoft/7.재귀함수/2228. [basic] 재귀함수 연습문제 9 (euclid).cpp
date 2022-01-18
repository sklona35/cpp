#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int a,b;

void f(int n, int m) {
    if(m%n==0) {
        cout<<n<<" "<<a/n*b;
    }
    
    else if(m%n>=n) f(n,m%n);
    else f(m%n,n);
}

int main() {
    cin>>a>>b;
    if(a>=b) f(b,a);
    else f(a,b);
} 
