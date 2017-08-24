#include<stdio.h>
int main()
{
	long long int number,i=0;
	long long int result;
	char ch='%';
	while(i<1){
		scanf("%lld",&number);
		if(number<0){
			break;
		}
		else if(number==1){
			printf("0%c\n",ch);
		}
		else {
			result=number*25;
		printf("%lld%c\n",result,ch);
		}
	}
	return 0;
}
