#include<stdio.h>
int main()
{
	long long int fact;
	int number,i;
	while(scanf("%d",&number)!=EOF){
		fact=1;
	if(number<0&&number%2==0||number>=0&&number<=7){
		printf("Underflow!\n");
		}
		else if(number>7&&number<=13){
			for(i=1;i<=number;i++){
				fact*=i;
			}
			printf("%lld\n",fact);
		}
		else {
			printf("Overflow!\n");
		}
	}
	return 0;
}
