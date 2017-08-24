#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		if((a==b)&&(b==c)&&(c==a)){
			printf("*\n");
		}
		else if(a!=b&&a!=c&&(b==c)){
			printf("A\n");
		}
		else if(b!=c&&(a==c)){
			printf("B\n");
		}
		else {
			printf("C\n");
		}
	}
	return 0;
}
