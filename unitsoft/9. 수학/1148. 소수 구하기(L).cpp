#include <cstdio>

int arr[11];
int m;

int prime(int x) {
    if(x==1) return 0;
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int count=0;

void find_prime(int i, long long int sum) {
    
    if(i==m) {
        count += prime(sum);
        if(prime(sum)==1) printf("%d ",sum);
        return;
    }
    for(int j=0;j<=9;j++) {
        if(arr[j]!=0) {
            arr[j]--;
            find_prime(i+1,sum*10+j);
            arr[j]++;
        }
    }
    return;
}

int main() {

    long long int a;

    scanf("%lld",&a);
    while(a) {
        arr[a%10]++;
        a/=10;
        m++;
    }

    find_prime(0,0);

    if(count==0) printf("0");

}   