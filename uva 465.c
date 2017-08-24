#include<stdio.h>
#include<stdlib.h>
int main()
{
	long double number1,number2,sum,product;
	char input1[10000],input2[100000],ch[2];
	while(scanf("%s%s%s",&input1,&ch,&input2)!=EOF){
		number1=atof(input1);
		number2=atof(input2);
		printf("%s %s %s\n",input1,ch,input2);
		if(number1>2147483647){
			printf("first number too big\n");
		}
		if(number2>2147483647){
			printf("second number too big\n");
		}
		if (ch[0]=='+') {
			number1=number1+number2;
			if(number1>2147483647){
				printf("result too big\n");
			}
		}
		else {
			number1=number1*number2;
			if(number1>2147483647){
				printf("result too big\n");
			}
		}
	}
	return 0;
}
