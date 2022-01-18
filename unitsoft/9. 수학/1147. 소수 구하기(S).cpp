#include <cstdio>

int prime(int x) {
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);
    int i=2,k=0;
    while(1) {
        if(prime(i)==1) k++;
        if(k==n) break;
        i++;
    }
    printf("%d",i);
}