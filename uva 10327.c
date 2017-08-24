#include<stdio.h>
int main()
{
	int number[10000],size,i,j,count;
	while(scanf("%d",&size)!=EOF){
		for(i=0;i<size;i++){
			scanf("%d",&number[i]);
		}
		count=0;
		for(i=0;i<size;i++){
			for(j=i;j<size;j++){
				if(number[i]>number[j]){
				count++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n",count);
	}
	return 0;
}
