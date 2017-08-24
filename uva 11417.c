#include<stdio.h>
int main()
{
	int number,sum,i,j,k,gcd;
	while(scanf("%d",&number)){
		if(number==0)break;
		sum=0;
		for(i=1;i<number;i++){
			for(j=i+1;j<=number;j++){
				for(k=1;k<=i&&k<=j;k++){
					if(i%k==0&&j%k==0){
						gcd=k;
					}
				}
				sum+=gcd;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
