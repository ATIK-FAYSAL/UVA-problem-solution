#include<stdio.h>
int main()
{
	long long int a,b,c;
	int number,i,j=0;
	while(j<1){
		scanf("%d",&number);
		if(number==0){
			break;
		}
		a=0,b=1,c=0;
		for(i=0;i<=number;i++){
			a=b;
			b=c;
			c=a+b;
		}
		printf("%lld\n",c);
	} 
	return 0;
}
