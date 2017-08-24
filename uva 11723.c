#include<stdio.h>
int main()
{
	int res,res2,number1,number2,a,j=1;
	float b;
	while(1){
		scanf("%d%d",&number1,&number2);
		if(number1==0&&number2==0)break;
		if(number1>number2){
			a=number1/number2;
			b=(float)number1/number2;
			if(a<b)res=a;
			else res=a-1;
			if(res>26)printf("Case %d: impossible\n",j);
			else {
				printf("Case %d: %d\n",j,res);
			}
		}
		else {
			printf("Case %d: 0\n",j);
		}
		j++;
	}
	return 0;
}
