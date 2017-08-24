#include<stdio.h>
int main()
{
	int i=0,number;
	while(i<1){
		scanf("%d",&number);
		if(number==0){
			break;
		}
		if(number%2==0){
			printf("Alice\n");
		}
		else {
			printf("Bob\n");
		}
	}
	return 0; 
}
