#include<stdio.h>
int main()
{
	int number,i,revers,last_number;
	while(scanf("%d",&number)!=EOF){
	int is_prime=0;
	revers=0;
	int num=number;
	for(i=2;i<=number/2;i++){
		if(number%i==0){
			is_prime=1;
			break;
		}
	}
	while(number!=0){
		revers=number%10+revers*10;
		number=number/10;
	}
	int prime=0;
	for(i=2;i<=revers/2;i++){
		if(revers%i==0){
			prime=1;
			break;
		}
	}
	if(is_prime==0&&(num==revers)){
		printf("%d is prime.\n",num);
	}
	else if(prime==0&&is_prime==0){
		printf("%d is emirp.\n",num);
	}
	else if(is_prime==0){
		printf("%d is prime.\n",num);
	}
	
	else{
		printf("%d is not prime.\n",num);
		}
	}
	return 0;
}
