#include<stdio.h>
int main()
{
	int hour,minite,i=0;
	double angle,result;
	char ch;
	while(i<1){
		scanf("%d%c%d",&hour,&angle,&minite);
		if(hour==0&&minite==0){
			break;
		}
		angle=(double)(30*hour)-(5.5*minite);
		if(angle<0){
			result=angle*-1;
			if(result>180){
				result=360-result;
				printf("%.3lf\n",result);
			}
			else {
			printf("%.3lf\n",result);
			}
		}
		else if(angle>180){
			result=360-angle;
			printf("%.3lf\n",result);
		}
		else {
			printf("%.3lf\n",angle);
		}
	}
}
