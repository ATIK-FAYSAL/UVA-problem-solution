#include<stdio.h>
int main()
{
	long long number1,number2,res1,res2;
	int i,j=1,test_case;
	char ch[10];
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%lld%s%lld",&number1,&ch,&number2);
		if(number1>=number2){
			if(number1%number2==0){
				res1=number1/number2;
				res2=number2/number2;
				printf("%lld / %lld\n",res1,res2);
			}
			else {
				printf("%lld / %lld\n",number1,number2);
			}
		}
		if(number1<number2){
			if(number2%number1==0){
				res1=number2/number1;
				res2=number2/number2;
				printf("%lld / %lld\n",res2,res1);
			}
			else {
				printf("%lld / %lld\n",number2,number1);
			}
		}
		j++;
	}
	return 0;
}
