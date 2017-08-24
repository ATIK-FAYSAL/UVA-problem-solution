#include<stdio.h>
int main()
{
	int element[100],sum1,sum2,size,i,j=0;
	while(j<1){
		scanf("%d",&size);
		if(size==0){
			break;
		}
		sum1=0,sum2=0;
		for(i=0;i<size;i++){
			scanf("%d",&element[i]);
		}
		sum1+=element[0]+element[1];
		sum2+=sum1;
		for(i=2;i<size;i++){
			sum1+=element[i];
			sum2+=sum1;
		}
		printf("THE RESULT IS = %d\n",sum2);
	}
}
