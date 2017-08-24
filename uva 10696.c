#include<stdio.h>
int main()
{
	int number,i=0;
	while(i<1){
		scanf("%d",&number);
		if(number==0){
			break;
		}
		if(number<=100){
			printf("f91(%d) = 91\n",number);
		}
		else if (number>=101){
			printf("f91(%d) = %d\n",number,number-10);
		}
	}
	return 0;
}
