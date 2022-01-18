#include <cstdio>

int main() {

    unsigned long long int a,r,n;

    scanf("%llu %llu %llu",&a,&r,&n);

    unsigned long long int m=0;

    for(int i=0;i<n;i++) {
        unsigned long long int k=a;
        //printf("%lld ",a);
        //printf("%lld ",k);
        while(k) {
            //if(m>10) break;
            m++;
            k/=10;
        }
        //printf("%lld\n",k);
        a*=r;
    }

    printf("%llu",m);

}