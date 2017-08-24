#include<stdio.h>
int main()
{
	signed long long sum=0,number;
	int i=0;
	while(i<1){
		scanf("%lli",&number);
		if(number==0){
			break;
		}
		sum+=number;
	}
	printf("%lli\n",sum);
}
