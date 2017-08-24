#include<stdio.h>
int main()
{
	float total,L,W,D,wigth;
	int test_case,j=1,count=0;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%f%f%f%f",&L,&W,&D,&wigth);
		total=L+W+D;
		if((total<=125&&wigth<=7.00)||(L==56&&W==45&&D==25&&wigth==7)){
			printf("1\n");
			count++;
		}
		else if (wigth>125||total>7.00){
			printf("0\n");
		}
		j++;
	}
	printf("%d\n",count);
	return 0;
}
