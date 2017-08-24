#include<stdio.h>
int main()
{
	long int number;
	int x=0,i,j,length,count,binary[1001];
	while(scanf("%ld",&number)==1){
		if(number<0){
			break;
		}
		length=1;
		for(i=1;i<=200;i++){
			binary[i]=number%2;
			number=number/2;
			if(number==0){
				break;
			}
			length++;
		}
		for(j=length;j>=1;j--){
			printf("%d",binary[j]);
		}	
		printf("\n");
	}
	return 0;
}
