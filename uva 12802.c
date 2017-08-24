#include<stdio.h>
int main()
{
	int prime,a,b,num,i,revers,number;
	while(scanf("%d",&number)!=EOF){
		prime=0,a=0,b=0,revers=0;
		num=number;
		printf("%d\n",num*2);
		for(i=2;i<=number/2;i++){
			if(number%i==0){
				prime=1;
				break;
			}
		}
		if(prime==0){
			a=1;
		}
		while(number!=0){
			revers=revers*10+number%10;
			number/=10;
		}
		if(revers==num){
			b=1;
		}
		if(a==1&&b==1){
			break;
		}
	}
	return 0;
}
