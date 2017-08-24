#include<stdio.h>
int big_mod(int base,int pwr,int mod)
{
	int res,result;
	if(pwr==0)return 1;
	result=big_mod(base,pwr/2,mod);
	res=(result*result)%mod;
	if(pwr%2!=0)
	res=(res*(base%mod))%mod;
	return res;
}
int main()
{
	int ans;
	int base,pwr,mod;
	while(scanf("%d%d%d",&base,&pwr,&mod)!=EOF){
		ans=big_mod(base,pwr,mod);
		printf("%d\n",ans);
	}
	return 0;
}
