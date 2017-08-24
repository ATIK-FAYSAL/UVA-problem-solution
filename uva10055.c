#include<stdio.h>
int main()
{
	long long int number1,number2;
	while(scanf("%ld%ld",&number1,&number2)!=EOF){
		if(number1>number2){
			printf("%lld\n",number1-number2);
		}
		else {
			printf("%lld\n",number2-number1);
		}
	}
	return 0;
}
