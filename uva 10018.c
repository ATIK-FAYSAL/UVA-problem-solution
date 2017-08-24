#include<stdio.h>
int main()
{
	long long int number,num,copy,revers,sum,j=1,i,test_case;
		scanf("%lld",&test_case);
		while(j<=test_case){
		scanf("%lld",&number);
		for(i=1;i<=200;i++){
			sum=0,revers=0;
			num=number;
		while(number!=0){
			revers=revers*10+number%10;
			number/=10;
		}
		if(num==revers){
			copy=i;
			break;
			 }
		number=revers+num;	
	}
	printf("%lld %lld\n",copy-1,revers);
		j++;
	}
	return 0;
}
