#include<stdio.h>
int main()
{
	long long int number[10000],i,num;
	while(1){
		scanf("%d",&num);
		if(num==0)break;
		number[1]=1,number[2]=1;
		for(i=3;i<=num;i++){
			number[i]=number[i-1]+number[i-2];
		}
		printf("%lld\n",number[num]);
	}
	return 0;
}
