#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char input[100];
	int number,i,length,sum,result,j=0;
	while(j<1){
		scanf("%s",input);
		if(input[0]=='0'){
			break;
		}
		sum=0;
		number=0;
		length=strlen(input);
		for(i=0;i<length;i++){
			number=(input[i]-'0');
			result=pow(2,length-i);
			sum+=number*(result-1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
