#include<stdio.h>
int main()
{
	int number1,number2,result;
	while(scanf("%d%d",&number1,&number2)!=EOF){
		result=number1*number2-1;
		printf("%d\n",result);
	}
	return 0;
}
