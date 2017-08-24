#include<stdio.h>
int main()
{
	int size1,size2,number[100],number1[1000],i,j,count,test_case,x=1;
	scanf("%d",&test_case);
	while(x<=test_case){
		count=0;
		scanf("%d",&size1);
		for(i=0;i<size1;i++){
			scanf("%d",&number[i]);
		}
		scanf("%d",&size2);
		for(j=0;j<size2;j++){
			scanf("%d",&number1[j]);
		}
		for(i=0;i<size1;i++){
			for(j=0;j<size2;j++){
				if(number[i]==number1[j]){
					count++;
				}
			}
		}
		printf("%d\n",count/2);
		x++;
	}
}
