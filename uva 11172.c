#include<stdio.h>
int main()
{
	int number,a,b,i=1;
	scanf("%d",&number);
	while(i<=number){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a>b){
			printf(">\n");
		}
		else if(a<b){
			printf("<\n");
		}
		else {
			printf("=\n");
		}
		i++;
	}
	return 0;
}
