#include<stdio.h>
int main()
{
	int number[200001],i,j,x=0,size ,num;
	while(x<1){
	scanf("%d",&size);
	if(size==0){
		break;
	}
	for(i=0;i<size;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(number[j]<number[i]){
				num=number[i];
				number[i]=number[j];
				number[j]=num;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d",number[i]);
			if(i==size-1){
				printf("\n");
			}
			else {
				printf(" ");
			}
		}
	}
	return 0;
}
