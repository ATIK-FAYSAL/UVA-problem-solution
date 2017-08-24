#include<stdio.h>
int main()
{
	int number,x=0,prime_number[100000],number2,count,is_prime,prime,i,j;
	while(scanf("%d",&number)!=EOF){
		count=0;
		x=0;
		for(i=3;i<=50;i++){
			is_prime=0;
			for(j=2;j<=i/2;j++){
				if(i%j==0){
					is_prime=1;
					break;
				}
			}
			if(is_prime==0){
				prime_number[x]=i;
				x++;
				count++;
			}
		}
		for(x=0;x<count;x++){
			printf("%d ",prime_number[x]);
		}
	}
}
