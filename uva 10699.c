#include<stdio.h>
int main()
{
	int number1,number2,is_prime,test_case,t=0,j,num,i,sum,p,count,prime;
		while(t<1){
			count=0;
		scanf("%d",&number1);
		if(number1==0){
			break;
		}
		for(i=1;i<=number1;i++){
			if(number1%i==0){
				is_prime=0;
				for(p=2;p<=i/2;p++){
					if(i%p==0){
						is_prime=1;
						break;
					}
				}
				if(is_prime==0){
					count++;
					}
				}
			}
			printf("%d : %d\n",number1,count-1);
		}
	return 0;
}
