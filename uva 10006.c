#include<stdio.h>
int main()
{
	int number,i=0;
	while(i<1){
		scanf("%d",&number);
		if(number==0){
			break;
		}
		if(number==561||number==1729||number==2465||number==2821){
			printf("The number %d is a Carmichael number.\n",number);
		}
		else {
			printf("%d is normal.\n",number);
		}
	}
	return 0;
}
