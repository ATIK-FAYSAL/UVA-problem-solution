#include<stdio.h>
int main()
{
	int number1,number2,i,loop,sum,j=1;
	scanf("%d",&loop);
	while(j<=loop){
		sum=0;
		scanf("%d%d",&number1,&number2);
		for(i=number1;i<=number2;i++){
			if(i%2!=0){
				sum+=i;
			}
		}
		printf("Case %d: %d\n",j,sum);
		j++;
	}
	return 0;
}
