#include<stdio.h>
int main()
{
	long long int loop,product,size,number1,number2,number3,sum,i,j;
	scanf("%lld",&loop);
	for(i=1;i<=loop;i++){
		scanf("%lld",&size);
		sum=0;
		for(j=1;j<=size;j++){
			scanf("%lld%lld%lld",&number1,&number2,&number3);
			product=number1*number3;
			sum+=product;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
