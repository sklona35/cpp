#include <cstdio>

int main() {
    int a;
    scanf("%d",&a);
    while(a!=1) {
        for(int i=2;i<=a;i++) {
            if(a%i==0) {
                while(a%i==0) {
                    printf("%d ",i);
                    a/=i;
                }
            }
        }
    }
}