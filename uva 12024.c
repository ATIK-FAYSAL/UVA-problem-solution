#include<stdio.h>
int main()
{
	int number,fact,i,test_case,j=1;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d",&number);
		fact=1;
		for(i=1;i<=number;i++){
			fact*=i;
		}
		if(number==2){
			printf("1/%d\n",fact);
		}
		else if (number==3){
			printf("2/%d\n",fact);
		}
		else if (number==4){
			printf("9/%d\n",fact);
		}
		else if (number==5){
			printf("44/%d\n",fact);
		}
		else if (number==6){
			printf("265/%d\n",fact);
		}
		else if (number==7){
			printf("1854/%d\n",fact);
		}
		else if (number==8){
			printf("14833/%d\n",fact);
		}
		else if (number==9){
			printf("133496/%d\n",fact);
		}
		else if (number==10){
			printf("1334961/%d\n",fact);
		}
		else if (number==11){
			printf("14684570/%d\n",fact);
		}
		else if (number==12){
			printf("176214841/%d\n",fact);
		}
		j++;
	}
	return 0;
}
