#include<stdio.h>
int main()
{
	int test_case,i,j=1,number;
	scanf("%d",&test_case);
	while(j<=number){
		int sum=0;
		while(scanf("%d",&number)!=EOF){
			sum++;
		}
		if(sum%2==0){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		j++;
	}
	return 0;
}
