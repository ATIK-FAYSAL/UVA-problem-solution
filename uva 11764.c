#include<stdio.h>
int main()
{
	int x,i,j=1,wall,number[100],high,low,test_case,min;
	scanf("%d",&test_case);
	while(j<=test_case){
		high=0,low=0;
		scanf("%d",&wall);
		for(i=0;i<wall;i++){
			scanf("%d",&number[i]);
		}
		for(i=0;i<wall-1;i++){
			for(x=i+1;x<=i+1;x++){
				if(number[x]>number[i]){
					high++;
				}
				else if(number[x]<number[i]){
					low++;
				}
			}
		}
		printf("Case %d: %d %d\n",j,high,low);
		j++;
	}
	return 0;
}
