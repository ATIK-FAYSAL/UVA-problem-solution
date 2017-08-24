#include<stdio.h>
#include<math.h>
int fib(int num,int mod)
{
	if(num==0)return 0;
	if(num==1)return 1;
	int result,p;
	p=pow(2,mod);
	result=(fib(num-1,mod))%p+(fib(num-2,mod))%p;
	return result%p;
}
int main()
{
	int ans,num,mod;
	while(scanf("%d%d",&num,&mod)!=EOF){
		ans=fib(num,mod);
		printf("%d\n",ans);
	}
	return 0;
}
