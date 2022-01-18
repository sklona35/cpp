#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n, mx=0;

void three(int i, int hap) {
    if(i==n) {
        if(hap==0) {
            return;
        }
        if(hap%3==0) {
            //cout<<hap<<"\n";
            mx++;
        }
        return;
    }
    else if(i==0){
        three(i+1, hap*10+1);
        three(i+1, hap*10+2);
    }
    else if(i!=0){
        three(i+1, hap*10+0);
        three(i+1, hap*10+1);
        three(i+1, hap*10+2);
    }
}

int main() {
    cin>>n;
    three(0,0);
    cout<<mx;
}
