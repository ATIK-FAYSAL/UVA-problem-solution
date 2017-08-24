#include<stdio.h>
int main()
{
	int i,j,number[10][10],sum=0,size;
	scanf("%d",&size);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&number[i][j]);
			sum+=number[i][j];
		}
		printf("%d\n",sum);
	}
}
