#include<stdio.h>
int main()
{
	long long int number1,number2,revers,sum,revers1,test_case,j=1,revers2;
	scanf("%lld",&test_case);
	while(j<=test_case){
		revers=0,revers1=0,revers2=0;
		scanf("%lld %lld",&number1,&number2);
		while(number1!=0){
			revers1=revers1*10+number1%10;
			number1/=10;
		}
		while(number2!=0){
			revers2=revers2*10+number2%10;
			number2/=10;
		}
		sum=revers1+revers2;
		while(sum!=0){
			revers=revers*10+sum%10;
			sum/=10;
		}
		printf("%lld\n",revers);
		j++;
	}
	return 0;
}
