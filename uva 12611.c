#include<stdio.h>
int main()
{
	int radias,length,width,left_u,right_u,left_l,right_l,number,i=1;
	scanf("%d",&number);
	while(i<=number){
		scanf("%d",&radias);
		length=(radias/2)*10;
		width=(length/10)*6;
		left_u=(45*length)/100;
		right_u=length-left_u;
		left_l=(30*width)/60;
		right_l=width-left_l;
		printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i,left_u,left_l,right_u,right_l,right_u,right_l,left_u,right_l);
		i++;
	}
	return 0;
}
