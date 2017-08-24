#include<stdio.h>
int main()
{
	int number,a,b,c,i=1;
	scanf("%d",&number);
	while(i<=number){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b<=c||b+c<=a||c+a<=b){
			printf("Wrong!!\n");
		}
		else {
			printf("OK\n");
		}
		i++;
	}
	return 0;
}
