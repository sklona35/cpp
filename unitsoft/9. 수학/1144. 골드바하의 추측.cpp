#include  <cstdio>

int prime(int x) {
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int main() {
    int a,b,c;
    scanf("%d",&a);
    for(int i=2;i<a;i++) {
        if(prime(i)==1 && prime(a-i)==1) {
            printf("%d = %d + %d",a,i,(a-i));
            return 0;
        }
    }
    printf("Goldbach's conjecture is wrong.");
    return 0;
}