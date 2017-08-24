#include<stdio.h>
int main()
{
	int number1,number2,i=0,sum1,sum2;
	while(i<1){
		scanf("%d%d",&number1,&number2);
		if(number1<0&&number2<0){
			break;
		}
		if(number1>number2){
			sum1=(number1-number2);
			sum2=(100-number1)+number2;
		}
		else {
			sum1=number2-number1;
			sum2=(100-number2)+number1;
		}
		if(sum1<sum2){
			printf("the result is = %d\n",sum1);
		}
		else {
			printf("the result is = %d\n",sum2);
		}
		
	}
}
