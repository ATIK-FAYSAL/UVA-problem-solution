#include<stdio.h>
int main()
{
	int A,B,test_case,j=1;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d%d",&A,&B);
		if(B%A==0){
			printf("%d %d\n",A,B);
		}
		else {
			printf("-1\n");
		}
		j++;
	}
	return 0;
}
