#include <cstdio>

int main() {
    int a;
    scanf("%d",&a);
    if(a==1) {
        printf("not prime");
        return 0;
    }
    for(int i=2; i*i<=a; i++) {
        if(a%i==0) {
            printf("not prime");
            return 0;
        }

    }
    printf("prime");
    return 0;
}