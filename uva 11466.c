#include<stdio.h>
int main()
{
	long long int is_prime,i,j=0,k,enter_number,max;
	while(j<1){
		scanf("%lld",&enter_number);
		max=0;
		if(enter_number==0){
			break;
		}
		else if(enter_number<0){
			enter_number*=-1;
		}
		for(i=1;i<=enter_number;i++){
			is_prime=0;
			for(k=2;k<=i/2;k++){
				if(i%k==0){
					is_prime=1;
					break;
				}
			}
			if(is_prime==0){
				if(enter_number%i==0){
					if(max<i){
						max=i;
						}
					}
				}
			}
			if(max==2){
				printf("-1\n");
			}
			else {
				printf("%lld\n",max);
			}
		}
		
	return 0;
}
