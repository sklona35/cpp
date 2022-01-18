#include <cstdio>

int main () {
    int a,mx=0,arr[111] = {};
    scanf("%d",&a);
    for(int i=1;i<=a;i++) {
        scanf("%d",&arr[i]);
        if(mx<arr[i]) mx=arr[i];
    }
    for(int i=mx;i>=1;i--) {
        int check=0;
        for(int j=1;j<=a;j++) {
            if(arr[j]%i!=0) check++;
        }
        if(check==0) {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}