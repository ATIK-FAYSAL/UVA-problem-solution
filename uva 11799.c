#include<stdio.h>
int main()
{
	int i,j,loop,number,size;
	scanf("%d",&loop);
	for(j=1;j<=loop;j++){
		scanf("%d",&size);
		int max=0;
		for(i=1;i<=size;i++){
			scanf("%d",&number);
			if(number>max){
				max=number;
			}
		}
		printf("Case %d: %d\n",j,max);
	}
	return 0;
}
