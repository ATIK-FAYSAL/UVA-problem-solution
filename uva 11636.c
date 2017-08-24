#include<stdio.h>
int main()
{
	int number,i,j=0,x=1,p,fact,fact1;
	while(j<1){
		scanf("%d",&number);
		if(number<0){
			break;
		}
		if(number==1){
			printf("Case %d: 0\n",x);
		}
		else {
			for(i=0;i<14;i++){
				for(p=1;p<=2;p++){
					fact=i*i;
				}
				for(p=1;p<=2;p++){
					fact1=(i+1)*(i+1);
				}
				if(fact<number&&number<=fact1){
					printf("Case %d: %d\n",x,i+1);
					}
				}
			}
			x++;
	}
}
