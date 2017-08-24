#include<stdio.h>
int main()
{
	long int number;
	int x=0,i,j,length,count,binary[1001];
	while(scanf("%ld",&number)==1){
		if(number<1){
			break;
		}
		length=1,count=0;
		for(i=1;i<=200;i++){
			binary[i]=number%2;
			if(binary[i]==1){
				count++;
			}
			number=number/2;
			if(number==0){
				break;
			}
			length++;
		}
		printf("The parity of ");
		for(j=length;j>=1;j--){
			printf("%d",binary[j]);
		}
		printf(" is %d (mod 2).\n",count);	
	}
	return 0;
}
