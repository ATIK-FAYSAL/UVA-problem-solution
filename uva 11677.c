#include<stdio.h>
int main()
{
	int result,H1,M1,H2,M2,time1,j=0,time2;
	while(j<1){
		scanf("%d%d%d%d",&H1,&M1,&H2,&M2);
		if(H1==0&&H2==0&&M1==0&&M2==0){
			break;
		}
		time1=(H1*60)+M1;
		time2=(H2*60)+M2;
		result=time2-time1;
		if(result<0){
			printf("%d\n",result+(24*60));
		}
		else {
			printf("%d\n",result);
		}
	}
	return 0;
}
