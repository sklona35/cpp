#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

void prt(int i, int j) {
    if(i==n) return;
    if(i<j) printf("%4d",i+1);
    prt(i+1,j);
    
}

void f(int k){
    if(k==n) {
        return;
    }
    prt(0,k+1);
    puts("");
    f(k+1);
}

int main() {
    scanf("%d",&n);
    f(0);
}
