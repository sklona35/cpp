#include <cstdio>

int arr[111111];

int main() {
    int hap=0, a;
    scanf("%d",&a); 
    if(a==1) {
        printf("1");
        return 0;
    }
    for(int i=1;i*i<=a;i++) {
        if(arr[i]==1) continue;
        if(a%i==0) {
            //printf("%d %d\n",i,(a/i));
            arr[i]=1;
            arr[a/i]=1;
            if(i==(a/i)) {
                hap=hap+i;
                continue;
            }
            hap=hap+i+(a/i);
        }
    }
    printf("%d",hap);
    return 0;
}