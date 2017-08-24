#include<stdio.h>
int main()
{
	int number,i,j,loop,loop1,x=1,y;
	scanf("%d",&loop);
	printf("\n");
	while(x<=loop){
		scanf("%d",&number);
		scanf("%d",&loop1);
		y=1;
	while(y<=loop1){
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=number-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
			}
			y++;
			printf("\n");
		}
		x++;
	}
	return 0;
}
