#include<stdio.h>
int main()
{
	int number,sqr,sum=0,l_number,i,loop,k=1;
	scanf("%d",&loop);
	while(k<=loop){
		int a=0;
	scanf("%d",&number);
	if(number<=9){
	sqr=number*number;
	}
	else if (number>9){
		sqr=number;
	}
	for(i=1;i<=2000;i++){
		sum=0;
		while(sqr!=0){
			l_number=sqr%10;
			sum+=l_number*l_number;
			sqr/=10;
		}
		sqr=sum;
			if(sqr==1){
				a=0;
				break;
			}
			else {
				a=1;
			}
		}
			if(a==0){
			printf("Case #%d: %d is a Happy number.\n",k,number);
		}
		else {
			printf("Case #%d: %d is an Unhappy number.\n",k,number);
			}
		k++;
	}
	return 0;
}
