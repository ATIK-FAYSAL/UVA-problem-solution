#include<stdio.h>
int main()
{
	int total,i,a,b,c,num=0,test_case,count,j=1;
	scanf("%d",&test_case);
	while(j<=test_case){
		count=0;
		scanf("%d%d%d",&a,&b,&c);
		total=a+b;
		while(total>=c){
			i=total%c;
			if(i==1){
				num=i;
			}
			count+=total/c;
			total/=c;
		}
		//printf("%d\n",num);
		printf("TOTAL = %d\n",count+num);
		j++;
	}
	return 0;
}
