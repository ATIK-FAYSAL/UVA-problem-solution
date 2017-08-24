#include<stdio.h>
int main()
{
	int number[13],i,test_case,j=1,a;
	scanf("%d",&test_case);
	while(j<=test_case){
		a=0;
		for(i=0;i<13;i++){
			scanf("%d",&number[i]);
		}
		for(i=0;i<13;i++){
			if(number[i]==0){
				a=0;
				break;
			}
			else {
				a=1;
			}
		}
		if(a==0){
			printf("Set #%d: No\n",j);
		}
		else {
			printf("Set #%d: Yes\n",j);
		}
		j++;
	}
}
