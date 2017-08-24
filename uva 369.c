#include<stdio.h>
int main()
{
	long long int result,j=0,number1,number2,i,a,b,c,d;
	while(j<1){
		scanf("%lld%lld",&number1,&number2);
		result=0;
		a=1,b=1,d=1;
		for(i=1;i<=number1;i++){
			a*=i;
		}
		printf("%lld\n",a);
		for(i=1;i<=number2;i++){
			b*=i;
		}
		printf("%lld\n",b);
		c=number1-number2;
		for(i=1;i<=c;i++){
			d*=i;
		}
		printf("%lld\n",d);
		result=a/(d*b);
		printf("%lld\n",result);
	}
}
