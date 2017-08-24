#include<stdio.h>
int mod(int x,int y,int n)
{
	if(y==0)return 1;
	int result,res;
	res=mod(x,y/2,n);
	result=(res*res)%n;
	if(y%2!=0){
		result=(result*(x%n))%n;
	}
	return result;
}
int main()
{
	int ans,i,x,y,n,test_case;
	while(1){
		scanf("%d",&test_case);
		if(test_case==0)break;
		for(i=1;i<=test_case;i++){
			scanf("%d%d%d",&x,&y,&n);
			ans=mod(x,y,n);
			printf("%d\n",ans);
		}
	}
	return 0;
}
