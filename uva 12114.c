#include<stdio.h>
int main()
{
	int number1,number2,j=0,x=1,a=92;
	while(j<1){
		scanf("%d%d",&number1,&number2);
		if(number1==0&&number2==0){
			break;
		}
		if(number1==0||number1==1){
			printf("Case %d: :-\\\n",x);
		}
		else if (number2>=number1){
			printf("Case %d: :-|\n",x);
		}
		else if(number1>number2){
			printf("Case %d: :-(\n",x);
		}
		x++;
	}
	return 0;
}
