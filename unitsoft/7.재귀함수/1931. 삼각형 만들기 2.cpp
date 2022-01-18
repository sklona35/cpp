#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

void prt(int i, int j) {
    if(i==n) return;
    else if(i<j) {
        printf(" ");
    }else if(i>=j) {
        printf("*");
    }
    prt(i+1,j);
    
}

void f(int k){
    if(k==n) {
        return;
    }
    prt(0,n-k-1);
    puts("");
    f(k+1);
}

int main() {
    scanf("%d",&n);
    f(0);
}
