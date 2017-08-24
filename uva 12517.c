#include<stdio.h>
int main()
{
	int number1,number2,last_number,sum,num,i,j=0;
	while(j<1){
		sum=0;
		scanf("%d%d",&number1,&number2);
		if(number1==0&&number2==0){
			break;
		}
		for(i=number1;i<=number2;i++){
			num=i;
			while(num!=0){
				sum+=num%10;
				num/=10;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
