#include<stdio.h>
int main()
{
	int number,i,number1,is_prime,j,array[100],count;
	while(scanf("%d%d",&number,&number1)!=EOF){
		
		count=0;
		int x=0;
		for(i=1;i<number;i++){
			is_prime=0;
			for(j=2;j<=i/2;j++){
				if(i%j==0){
					is_prime=1;
					break;
				}
			}
			if(is_prime==0){
				array[x]=i;
				x++;
				count++;		
			}
		}
		if(count%2==0){
			for(x=2*number1-2;x<count-number1;x++){
			printf("%d  ",array[x]);
			}
		}
		else{
			for(x=2*number1-1;x<count-(number1+1);x++){
				printf("%d  ",array[x]);
			}
		}
	}
}
