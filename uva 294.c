#include<stdio.h>
int main()
{
	int test_case,i,j,count,max,x=1,max1;
	long long int number1,number2;
	scanf("%d",&test_case);
	while(x<=test_case){
		max=0;
		scanf("%lld%lld",&number1,&number2);
		for(i=number1;i<=number2;i++){
			count=0;

			if(max<count){
				max=count;
				max1=i;
			}
		}
		printf("%d %d\n",max1,max);
		x++;
	}
	return 0;
}
