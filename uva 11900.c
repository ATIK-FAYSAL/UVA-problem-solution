#include<stdio.h>
int main()
{
	int E_number,P,Q,gm[1000],sum,count,test_case,j=1,i;
	scanf("%d",&test_case);
	while(j<=test_case){
		sum=0,count=0;
		scanf("%d%d%d",&E_number,&P,&Q);
		for(i=0;i<E_number;i++){
			scanf("%d",&gm[i]);
		}
		for(i=0;i<E_number;i++){
			sum+=gm[i];
			count++;
			if(sum>Q||count>P){
				break;
			}
		}
	
		if(count<=P&&sum<=Q){
			printf("Case %d: %d\n",j,count);
		}
		else {
			printf("Case %d: %d\n",j,count-1);
		}
		j++;
	}
	return 0;
}
