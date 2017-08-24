#include<stdio.h>
int main()
{
	int N,K,s,b,r,x,total;
	while(scanf("%d%d",&N,&K)!=EOF){
		s=N;
		total=0;
		while(s>=K){
			b=s/K;
			r=s%K;
			s=r+b;
			total+=b;
		}
		printf("%d\n",total+N);
	}
	return 0;
}
