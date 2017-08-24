#include<stdio.h>
int main()
{
	int age[100],test_case,j=1,i,size;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d",&size);
		for(i=0;i<size;i++){
			scanf("%d",&age[i]);
		}
		printf("Case %d: %d\n",j,age[i/2]);
		j++;
	}
	return 0;
}
