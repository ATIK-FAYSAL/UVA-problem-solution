#include<stdio.h>
int main()
{
	int number,i,sum,num,loop,j=1;
	scanf("%d",&loop);
	while(scanf("%d%d",&number,&num)!=EOF){
		sum=0;
		for(i=1;i<=number;i++){
			if(number%i==0&&i%num!=0){
				sum+=i;
			}
		}
		printf("%d\n",sum);
		if(j==loop){
			break;
		}
		j++;
	}
	return 0;
}
