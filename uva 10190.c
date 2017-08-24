#include<stdio.h>
int main()
{
	int x,a,number1,number2,count,i,j;
	long long result[10000];
	while(scanf("%d%d",&number1,&number2)!=EOF){
		x=0;
		a=0;
		count=0;
		int num=1;
		for(i=0;i<=200;i++){
			result[x]=num;
			num*=number2;
			count++;
			if(result[x]>number1&&result[x]!=number1){
				a=1;
				break;
			}
			if(result[x]==number1){
				break;	
			}
			x++;
		}
		if(a==1||number1==0||number2==0||number1<number2||number1==1||number2==1){
			printf("Boring!\n");
		}
		else {
			for(x=count-1;x>=0;x--){
				printf("%lld",result[x]);
				if(x==0){
					printf("\n");
				}
				else {
					printf(" ");
				}
			}
		}
	}
	return 0;
}
