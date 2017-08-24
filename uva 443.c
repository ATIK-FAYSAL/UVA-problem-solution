#include<stdio.h>
int main()
{
	long long int number,i,count,j=0,last_number;
	while(j<1){
		count=0;
		scanf("%lld",&number);
		for(i=1;i;i++){
			if(i%2==0||i%3==0||i%7==0||i%5==0){
				count++;
			}
			if(count==number){
				break;
			}
		}
		last_number=number%10;
		if(last_number==1){
			printf("The %lldst humble number is %lld.\n",number,i);
		}
		else if (last_number==2){
			printf("The %lldnd humble number is %lld.\n",number,i);
		}
		else if (last_number==3){
			printf("The %lldrd humble number is %lld.\n",number,i);
		}
		else {
			printf("The %lldth humble number is %lld.\n",number,i);
		}
	}
}
