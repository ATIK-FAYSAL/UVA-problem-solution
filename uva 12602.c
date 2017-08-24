#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char input[100],copy[100];
	int x,number,i,sum,len,test_case,j=1,c,result;
	scanf("%d",&test_case);
	while(j<=test_case){
		sum=0;
		x=0;
		scanf("%s",&input);
		len=strlen(input);
		c=2;
		for(i=0;i<3;i++){
			sum+=(input[i]-65)*pow(26,c);
			c--;
		}
		for(i=0;i<len;i++){
			if(input[i]>='0'&&input[i]<='9'){
				copy[x]=input[i];
				x++;
			}
		}
		number=atoi(copy);
		result=sum-number;
		if(result<0){
			result=result*-1;
		}
		else {
			result=result;
		}
		if(result<=100){
			printf("nice\n");
		}
		else {
			printf("not nice\n");
		}
		j++;
	}
	return 0;
}
