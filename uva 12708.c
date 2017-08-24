#include<stdio.h>
int main()
{
	long long int number;
	int j=1,test_case;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%lld",&number);
		printf("%lld\n",number/2);
		j++;
	}
	return 0;
}
