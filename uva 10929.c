#include<stdio.h>
int main()
{
	int j,number,i=0,last_number,count;
	char input[1001];
	while(i<1){
		count=0;
		scanf("%d",&number);
			while(number!=0){
			last_number=number%10;
			number/=10;
			count++;
		}
		for(j=count;j>=1;j--){
			input[j]=number;
		}
		printf("%s\n",input);
	}
}
