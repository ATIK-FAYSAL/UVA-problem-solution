#include<stdio.h>
int main()
{
	int number,count,num,input,i,j=0,sum,x=0;
	while(j<1){
		sum=0,count=0;
		scanf("%d",&number);
		if(number==0){
			break;
		}
		for(i=1;i<number;i++){
			if(number%i==0){
				sum+=i;
			}
		}
		num=number;
		while(num!=0){
			num/=10;
			count++;
		}
		if(x==0){
			printf("PERFECTION OUTPUT\n");
		}
		if(count==1){
		if(sum==number){
			printf("    %d  PERFECT\n",number);
		}
		else if (sum<number){
			printf("    %d  DEFICIENT\n",number);
		}
		else if (sum>number){
			printf("    %d  ABUNDANT\n",number);
			}
		}
		else if(count==2){
		if(sum==number){
			printf("   %d  PERFECT\n",number);
		}
		else if (sum<number){
			printf("   %d  DEFICIENT\n",number);
		}
		else if (sum>number){
			printf("   %d  ABUNDANT\n",number);
			}
		}
		else if(count==3){
		if(sum==number){
			printf("  %d  PERFECT\n",number);
		}
		else if (sum<number){
			printf("  %d  DEFICIENT\n",number);
		}
		else if (sum>number){
			printf("  %d  ABUNDANT\n",number);
			}
		}
		else if(count==4){
		if(sum==number){
			printf(" %d  PERFECT\n",number);
		}
		else if (sum<number){
			printf(" %d  DEFICIENT\n",number);
		}
		else if (sum>number){
			printf(" %d  ABUNDANT\n",number);
			}
		}
		else if(count==5){
		if(sum==number){
			printf("%d  PERFECT\n",number);
		}
		else if (sum<number){
			printf("%d  DEFICIENT\n",number);
		}
		else if (sum>number){
			printf("%d  ABUNDANT\n",number);
			}
		}
		x++;
	}
	printf("END OF OUTPUT\n");
	return 0;
}
