#include<stdio.h>
int main()
{
	long long int number1,number2,result,i,j=0,last_number;
	while(j<1){
		result=1;
		scanf("%lld%lld",&number1,&number2);
		if(number1==0&&number2==0){
			break;
		}
		for(i=1;i<=number2;i++){
			result*=number1;
		}
		if(result>9){
				last_number=result%10;
			printf("%lld\n",last_number);
		}
		else {
			printf("%lld\n",result);
		}
	}
	return 0;
}
