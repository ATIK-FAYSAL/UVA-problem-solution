#include<stdio.h>
int main()
{
	int number[1000],len,test_case,t=1,j,i,max;
	scanf("%d",&test_case);
	while(t<=test_case){
		scanf("%d",&len);
		for(i=0;i<len;i++){
			scanf("%d",&number[i]);
		}
		max=number[0];
		for(i=0;i<len;i++){
			for(j=i;j<len;j++){
				if(number[i]%number[j]&&max<number[j]){
					max=number[j];
				}
			}
		}
		printf("%d\n",max);
	}
}
