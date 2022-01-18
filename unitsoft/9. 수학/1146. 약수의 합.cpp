#include <cstdio>
#include <math.h>

long long int arr[111111];

int main() {
    long long int hap=0, a;
    scanf("%lld",&a); 
    /*if(a==1) {
        printf("1");
        return 0;
    }*/
    for(long long int i=1;i*i<=a;i++) {
        /*if(arr[i]==1) {
            printf("%lld",hap);
            return 0;
        }*/
        if(a%i==0) {
            //printf("%lld %lld\n",i,(a/i));
            //arr[(a/i)-sqrt(a)]=1;
            if(i==(a/i)) {
                hap=hap+i;
                continue;
            }
            hap=hap+i+(a/i);
        }
    }
    printf("%lld",hap);
    return 0;
}