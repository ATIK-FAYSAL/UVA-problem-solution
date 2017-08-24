#include<stdio.h>
int main()
{
	long long int a,b,c,x,y,z;
	int j=0,i,N;
	while(j<1){
		scanf("%d",&N);
		if(N<0){
			break;
		}
		a=0,b=1,c=0,x=0,y=1,z=0;
		for(i=0;i<=N+1;i++){
			a=b;
			b=c;
			c=a+b;
		}
		for(i=0;i<=N+2;i++){
			x=y;
			y=z;
			z=x+y;
		}
		printf("%lld %lld\n",c-1,z-1);
	}
	return 0;
}
