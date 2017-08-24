#include<stdio.h>
int main()
{
	int number1,number2,result1,test_case,j=1,result;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d%d",&number1,&number2);
		if(number1>=number2){
			result=number1%number2;
			if(result==0){
			result1=number1/number2;
			printf("%d\n",result1);
			}
			else {
				printf("NO SOLUTION\n");
			}
		}
		else if(number1<number2) {
			result=number2%number1;
			if(result==0){
				result1=number2/number1;
			printf("%d\n",result1);
			}
			else {
				printf("NO SOLUTION\n");
			}
		}
		j++;
	}
}
