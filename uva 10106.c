#include<stdio.h>
int main()
{
	long long number1,number2;
	while(scanf("%llu%llu",&number1,&number2)!=EOF){
		printf("%llu\n",number1*number2);
	}
	return 0;
}
