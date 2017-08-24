#include<stdio.h>
#include<math.h>
int main()
{
	int number,sum,loop,i,l_number,num,num1,x=1,count;
	scanf("%d",&loop);
	while(x<=loop){
		count=0,sum=0;
	scanf("%d",&number);
	num=number;
	num1=number;
	while(num1!=0){
		l_number=num1%10;
		num1/=10;
		count++;
	}
	while(number!=0){
		l_number=number%10;
		sum+=pow(l_number,count);
		number/=10;
	}
	if(sum==num){
		printf("Armstrong\n");
	}
	else {
		printf("Not Armstrong\n");
		}
		x++;
	}
	return 0;
}

