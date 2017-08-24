#include<stdio.h>
int main()
{
	int number1,number2,sum,sub,test_case,j=1;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d%d",&number1,&number2);
		sum=number1+number2;
		sub=number1-number2;
		if(sub<0||sum%2!=0){
			printf("impossible\n");
		}
		else {
			printf("%d %d\n",sum/2,sub/2);
		}
		j++;
	}
	return 0;
}
