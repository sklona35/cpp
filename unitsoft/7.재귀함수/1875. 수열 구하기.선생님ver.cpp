#include <stdio.h>  //���������2 (1875)

using namespace std;
int num[1010], CN[10];
int N, M;

void f(int here){
    //printf("%d => ", here);
    if(here==M){            //������ M���� ���� �����Ƿ� ����ϰ� ������(return) 
        for(int i=0; i<M; i++) printf("%d ", num[i]);
        printf("\n");
        return ;
    }
    for(int j=0; j<10; j++){
        if(CN[j]){          //j��� ���� �ԷµǾ���, ���� ����������  
            num[here]= j;   //j�� �ְ� �� ���� ������ ���δ� 
            CN[j]--;
            f(here+1);      //���� ���� ä�쵵�� ��� ȣ���Ѵ� 
            num[here]= 0;   //������ ����� �Լ��� ����Ǿ����Ƿ� num[]�� �� ���� ������ �����Ѵ� 
            CN[j]++;
        }
    }
}

int main()
{
    int a;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &a);    //�Է� ���� ���� �ε����� �ϴ� �迭���Ұ��� ������Ų��. ���� ���� ���� �� �ִٴ�,,,
        CN[a]++;
    }
    f(0);           //num[]�� �� ���·� ����Ѵ� 
    return 0;
}
