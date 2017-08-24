#include<stdio.h>
int main()
{
	long long  number;
	while(scanf("%llu",&number)!=EOF){
		printf("%llu\n",number-1);
	}
	return 0;
}
