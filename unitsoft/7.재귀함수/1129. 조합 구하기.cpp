#include <cstdio>
#include <iostream>
using namespace std;

int n,r;
int arr[22];

void prt(int i) {
    if(i==r) return;
    printf("%c",arr[i]+64);
    prt(i+1);
}

void f(int i, int end) {
    if(i==r) {
        prt(0);
        puts("");
        return;
    }
    //else {
        for(int j=end+1; j<=n; j++) {
            arr[i]=j;
            f(i+1,j);
        }
    //}
}

int main() {
    cin>>n>>r;
    f(0,0);
}
