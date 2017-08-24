#include<stdio.h>
int main()
{
	float number,sum,avg;
	int i,test_case,j=1,size;
	scanf("%d",&test_case);
	while(j<=test_case){
		sum=0;
		scanf("%d",&size);
		for(i=0;i<size;i++){
			scanf("%f",&number);
			sum+=number;
		}
		avg=(float)sum/size;
		printf("Case #%d: %.3f\n",j,avg);
		j++;
	}
	return 0;
}
