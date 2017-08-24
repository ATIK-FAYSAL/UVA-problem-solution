#include<stdio.h>
int main()
{
	int j=0,x=1,number,loop,i,count,count1;
	while(j<1){
		count=0;
		count1=0;
		scanf("%d",&loop);
		if(loop==0){
			break;
		}
		for(i=1;i<=loop;i++){
			scanf("%d",&number);
			if(number==0){
				count++;
			}
			else if(number>0){
				count1++;
			}
		}
		printf("Case %d: %d\n",x,count1-count);
		x++;
	}
	return 0;
}
