#include<stdio.h>
int main()
{
	int i,number1,number2,sum=0;
	scanf("%d%d",&number1,&number2);
	if(number1>0&&number1<1000000&&number2>0&&number2<1000000){
		for(i=number1+1;i<number2;i++){
			if(i%2==0){
				sum+=i;
			}
		}
		printf("%d %d %d\n",number1,number2,sum);
	}
	return 0;
}
