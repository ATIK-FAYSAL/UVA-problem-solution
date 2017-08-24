#include<stdio.h>
int main()
{
	int number1,number2;
	while(scanf("%d%d",&number1,&number2)!=EOF){
		if(number1>number2){
			printf("the result is = %d\n",number1);
		}
		else {
			printf("the result is = %d\n",number2);
		}
	}
	return 0;
}
