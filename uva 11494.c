#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,i=0,result1,result2;
	while(i<1){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		if(x1==0&&x2==0&&y1==0&&y2==0){
			break;
		}
		if(x1>x2){
			result1=x1-x2;
		}
		else {
			result1=x2-x1;
		}
		if(y1>y2){
			result2=y1-y2;
		}
		else {
			result2=y2-y1;
		}
		if(result1==0&&result2==0){
			printf("0\n");
		}
		else if(result1==result2||result1==0||result2==0){
			printf("1\n");
		}
		else {
			printf("2\n");
		}
	}
	return 0;
}
