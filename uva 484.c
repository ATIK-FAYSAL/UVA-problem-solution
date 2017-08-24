#include<stdio.h>
int main()
{
	int num[100],number[100],size=0,i=0,count,j;
	while(scanf("%d",&number[i])!=EOF{
		num[i]=-1;
		size++;
		i++;
	}
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(number[i]==number[j]){
				count++;
				num[j]=0;
			}
		}
		if(num[i]!=0){
			num[i]=count;
		}
	}
	for(i=0;i<size;i++){
		if(num[i]!=0){
			printf("%d %d\n",number[i],num[i]);
		}
	}
	return 0;
}
