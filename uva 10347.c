#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,max,sum;
	float sum1,result,p,q,r,area,x,y;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		if(a+b>c&&b+c>a&&c+a>b){
			sum=2*a+2*b+2*c;
			sum1=(float)(a+b+c)/2;
			p=sum1-a;q=sum1-b;r=sum1-c;
			result=sum*p*q*r;
			x=sqrt(result);
			area=4*(x/3);
			printf("%.3f\n",area/2);
		}
		else {
			printf("-1.000\n");
		}
	}
	return 0;
}
