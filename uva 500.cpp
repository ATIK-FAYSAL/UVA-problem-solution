#include<stdio.h>
int main()
{
	int number,j=0,i;
	while(j<1){
	scanf("%d",&number);
	if(number==0){
		break;
	}
	long long int a=0,b=1,sum=1;
	for(i=1;i<number;i++){
		a=b;
		b=sum;
		sum=a+b;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
