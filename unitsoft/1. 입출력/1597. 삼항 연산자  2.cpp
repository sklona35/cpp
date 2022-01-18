#include <cstdio>

int main() {
    int a,b,c;
    int l;
    scanf("%d %d %d",&a,&b,&c);
    a>b ? a>c ? l=a : l=c : b>c ? l=b : l=c;
    printf("%d",l);
}
