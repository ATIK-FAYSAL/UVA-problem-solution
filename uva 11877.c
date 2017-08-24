#include<stdio.h>
int main()
{
	int empty_bottle,total_coc,j=0;
	while(j<1){
		scanf("%d",&empty_bottle);
		if(empty_bottle==0){
			break;
		}
		total_coc=empty_bottle/2;
		printf("%d\n",total_coc);
	}
	return 0;
}
