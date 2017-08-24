#include<stdio.h>
int main()
{
	char input[20];
	int number , i,length,result;
	while(scanf("%s",&input)!=EOF){
		length=0;
		int sum1=0,sum=0;
		for(i=0;input[i]!='\0';i++){
			length++;
		}
	for(i=0;i<length;i++){
		if(input[i]>='a'&&input[i]<='z'){
		sum+=input[i]-96;
		}
		else if(input[i]>='A'&&input[i]<='Z'){
			sum1+=input[i]-64+26;
			}
		}
		result=sum1+sum;
		int prime= 0,x;
		for(x=2;x<=result/2;x++){
			if(result%x==0){
				prime = 1;
				break;
			}
		}
		if(prime ==0){
			printf("It is a prime word.\n");
		}
		else {
			printf("It is not a prime word.\n");
		}
	}
	return 0;
}
