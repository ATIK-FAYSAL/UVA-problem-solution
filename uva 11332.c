#include<stdio.h>
int main()
{
	int sum2,i,number,sum1,last_number1,last_number,sum,last_number2,a;
	while(i<1){
		sum=0;
		sum1=0;
		sum2=0;
		scanf("%d",&number);
		if(number==0){
			break;
		}
		while(number!=0){
			last_number=number%10;
			sum+=last_number;
			number=number/10;
		}
		while(sum!=0){
			last_number1=sum%10;
			sum1+=last_number1;
			sum=sum/10;
		}
		a=sum1;
			if(a>9){
			while(a!=0){
				last_number2=a%10;
				sum2+=last_number2;
				a=a/10;
			}
			printf("%d\n",sum2);
		}
		else {
		printf("%d\n",a);
		}
	}
	return 0;
}
