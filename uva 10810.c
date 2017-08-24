#include<stdio.h>
int main()
{
	int size,i,t=0,j,count;
	long long int number[999999999];
	while(t<1){
		scanf("%d",&size);
		if(size==0){
			break;
		}
		for(i=0;i<size;i++){
			scanf("%lld",&number[i]);
		}
		count=0;
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				if(number[i]>number[j]){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
