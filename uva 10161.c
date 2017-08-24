#include<stdio.h>
int main()
{
	int number[5][5],i,j,num,x=0;
		for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&number[i][j]);
		}
	}
	while(x<1){
	scanf("%d",&num);
	if(num==0){
		break;
	}
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(number[i][j]==num){
				printf("%d %d\n",i,j);
				}
			}
		}
	}
}
