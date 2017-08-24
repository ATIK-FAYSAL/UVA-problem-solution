#include<stdio.h>
int main()
{
	int taka,sum=0,number,i=1;
	char input[10];
	scanf("%d",&number);
	while(i<=number){
		scanf("%s",input);
		if(input[0]=='d'){
			scanf("%d",&taka);
			sum+=taka;
		}
		if(input[0]=='r'){
			printf("%d\n",sum);
		}
		i++;
	}
	return 0;
}
