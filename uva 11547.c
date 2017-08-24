#include<stdio.h>
int main()
{
	int j,num,num1,i,loop,number,ans,ans1,ans2,ans3,ans4,ans5;
	scanf("%d",&loop);
	for(i=1;i<=loop;i++){
		scanf("%d",&number);
		ans=number*567;
		ans1=ans/9;
		ans2=ans1+7492;
		ans3=ans2*235;
		ans4=ans3/47;
		ans5=ans4-498;
		for(j=1;j<=2;j++){
			num=ans5%10;
			ans5=ans5/10;
		}
		if(num<0){
			num1=num*-1;
			printf("%d\n",num1);
		}
		else {
		printf("%d\n",num);
		}
	}
	return 0;
}
