#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int a,b;

void f(int n, int m) {
    if(n%m==0) return;
    else {
        f((n-n%m)/m,m);
        if(n%m==10) cout<<"A";
        else if(n%m==11) cout<<"B";
        else if(n%m==12) cout<<"C";
        else if(n%m==13) cout<<"D";
        else if(n%m==14) cout<<"E";
        else if(n%m==15) cout<<"F";
        else cout<<n%m;
    }
}

int main() {
    cin>>a>>b;
    f(a,b);
}
