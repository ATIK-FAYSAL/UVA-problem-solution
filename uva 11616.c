#include<stdio.h>
#include<string.h>
int main()
{
	int num,num1,arr[100],i,j,k,x,length,sum=0,result=0;
	char input[100];
	gets(input);
	length=strlen(input);
	for(i=0;i<length;i++){
		if(input[i]=='I'){
			arr[i]=1;
		}
		else if(input[i]=='V'){
			arr[i]=5;
		}
		else if(input[i]=='X'){
			arr[i]=10;
		}
		else if (input[i]=='L'){
			arr[i]=50;
		}
		else if (input[i]=='C'){
			arr[i]=100;
		}
		else if(input[i]=='D'){
			arr[i]=500;
		}
		else if (input[i]=='M'){
			arr[i]=1000;
		}
		printf("%d ",arr[i]);
	}
	//sum=arr[0];
	for(i=0;i<length-1;i++){
		if(i==0){
			sum+=arr[i];
		}
		for(j=i+1;j<=i+1;j++){
			if(arr[i]<arr[j]){
				//result=arr[j]-arr[i];
				sum+=arr[i];
				num=arr[i];
			printf("\nRESULT = %d\n",sum);
			}
			else if(arr[j]!=num){
				sum+=arr[j];
			}
		}
		//sum+=arr[i];
	}
	//printf("SUM = %d\n",sum);
	//printf("result = %d\n",result);
	printf("TOTAL SUM = %d\n",sum-(2*result));
}
