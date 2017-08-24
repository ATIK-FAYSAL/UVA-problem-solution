#include<stdio.h>
int main()
{
	int number[100],i,j,size,test_case,t=1;
	scanf("%d",&test_case);
	while(t<=test_case){
		int count=0;
		scanf("%d",&size);
		for(i=0;i<size;i++){
			scanf("%d",&number[i]);
		}
		for(i=0;i<size;i++){
			for(j=i+1;j<size;j++){
				if(number[j]<number[i]){
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
		t++;
	}
	return 0;
}
