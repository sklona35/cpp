#include <stdio.h>  //수열만들기2 (1875)

using namespace std;
int num[1010], CN[10];
int N, M;

void f(int here){
    //printf("%d => ", here);
    if(here==M){            //수열에 M개의 수가 들어갔으므로 출력하고 끝낸다(return) 
        for(int i=0; i<M; i++) printf("%d ", num[i]);
        printf("\n");
        return ;
    }
    for(int j=0; j<10; j++){
        if(CN[j]){          //j라는 수가 입력되었고, 아직 남아있으면  
            num[here]= j;   //j를 넣고 그 수의 개수를 줄인다 
            CN[j]--;
            f(here+1);      //다음 수를 채우도록 재귀 호출한다 
            num[here]= 0;   //위에서 출발한 함수가 종료되었으므로 num[]과 그 수의 개수를 복원한다 
            CN[j]++;
        }
    }
}

int main()
{
    int a;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &a);    //입력 받은 수를 인덱스로 하는 배열원소값을 증가시킨다. 같은 수가 들어올 수 있다는,,,
        CN[a]++;
    }
    f(0);           //num[]이 빈 상태로 출발한다 
    return 0;
}
