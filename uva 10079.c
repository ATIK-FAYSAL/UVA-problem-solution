#include<stdio.h>
int main()
{
	int j=0,number,i;
	long long int sum;
	while(j<1){
		sum=0;
		scanf("%d",&number);
		if(number<0){
			break;
		}
		for(i=0;i<=number;i++){
			sum+=i;
		}
		printf("%lld\n",sum+1);
	}
	return 0;
}
