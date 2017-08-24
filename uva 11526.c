#include<stdio.h>
int main()
{
	int number,i,loop,j=1;
	long long int sum;
	scanf("%d",&loop);
	while(j<=loop){
		sum=0;
		scanf("%d",&number);
		for(i=1;i<=number;i++){
			sum+=number/i;
		}
		printf("%lld\n",sum);
		j++;
	}
	return 0;
}
