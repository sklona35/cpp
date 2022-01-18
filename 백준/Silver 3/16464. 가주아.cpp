#include <cstdio>

int main() {

    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a);
        int check=0;
        while(a){
            if(a==1) {
                break;
            }
            if(a%2!=0) {
                printf("Gazua\n");
                check=1;
                break;
            }
            a/=2;
        }
        if(check==0) printf("GoHanGang\n");
    }

}