#include<stdio.h>
int main()
{
	int answare,number[5],i,count;
	while(scanf("%d",&answare)!=EOF){
		count=0;
		for(i=0;i<5;i++){
			scanf("%d",&number[i]);
			if(number[i]==answare){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
