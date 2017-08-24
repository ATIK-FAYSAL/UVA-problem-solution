#include<stdio.h>
int main()
{
	int number1,number2,number3,sum;
	while(scanf("%d%d%d",&number1,&number2,&number3)!=EOF){
		sum=number1+number2;
		if(sum>number3){
			printf("Hunters win!\n");
		}
		else {
			printf("Props win!\n");
		}
	}
	return 0;
}

