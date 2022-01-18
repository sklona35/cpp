#include <cstdio>
#include <cstring>
#define N 10

int search(char *name_s, char (*name_l)[7]) {
	int i; 
	for (i=0;i<N;i++) {
		if(strcmp(name_s,name_l[i])==0) return i;
	}
	return -1;
}

int main() {
	char who[7], name[N][7] = {"song", "goo", "hugo", "sdf", "sdasd", "qwe", "dfg", "ert", "ajgd"};
	char stdnum[N][7] = {"5228", "5211", "1235", "8282", "5165", "5232", "3452", "5210", "5210", "8255"};
	double grade[N] = {4.3, 4.0, 3.2, 2.7, 3.2, 4.0, 4.4, 3.7, 4.2, 3.8};
	int i;
	printf("정보를 찾고 싶은 학생의 이름은?");
	scanf("%s",who);
	i = search(who, name);
	if(i!=-1) {
		printf("name student_numder score \n");
		printf("--------------------------\n");
		printf("%s %6s %5.1lf\n",name[i],stdnum[i],grade[i]);
	}	
	else
	printf("%s 학생은 찾을 수 없습니다.");
}
