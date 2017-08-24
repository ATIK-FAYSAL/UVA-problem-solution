#include<stdio.h>
int main()
{
	int amount,a,b;
	scanf("%d",&amount);
	a=amount/50;
	amount=amount%50;
	printf("50 taka %d\n",a);
	a=amount/25;
	amount=amount%25;
	printf("25 taka %d\n",a);
	a=amount/10;
	amount=amount%10;
	printf("10 taka %d\n",a);
	a=amount/5;
	amount=amount%5;
	printf("5 taka %d\n",a);
	a=amount/1;
	amount=amount%1;
	printf("1 taka %d\n",a);
	
	
}
