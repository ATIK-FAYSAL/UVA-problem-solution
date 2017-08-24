#include<stdio.h>
int main()
{
	int number,arr[10000],i,prime,j,k,result,a,b;
	while(1){
		j=2;
		scanf("%d",&number);
		for(i=0;i<number;i++){
			arr[i]=j;
			j++;

		}
		for(i=0;i<number;i++){
			printf("%d ",arr[i]);
			/*prime=0;
			result=number-arr[i];
			for(k=2;k<=result/2;k++){
				if(result%k==0){
					prime=1;
					break;
				}
			}
			if(prime==0){
				a=result;
				b=arr[i];
				break;
			}*/
		}
		//printf("%d\n%d+%d\n",number,b,a);
	}
}
