#include<stdio.h>
int main()
{
	int number,i;
	long long int a,b,sum;
	while(scanf("%d",&number)!=EOF){
		a=0,b=1,sum=0;
		for(i=1;i<=number;i++){
			a=b;
			b=sum;
			sum=a+b;
		}
		printf("The Fibonacci number for %d is %lld\n",number,sum);
	}
	return 0;
}
