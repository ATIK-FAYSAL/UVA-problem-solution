#include<stdio.h>
#include<math.h>
int main()
{
	double result1,result,a,b,c,sum,radius;
	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
		if(a==0&&b==0&&c==0){
			printf("The radius of the round table is: 0.000\n");
		}
		else {
		sum=(a+b+c)/2;
		result=((sum-a)*(sum-b)*(sum-c))/sum;
		radius=sqrt(result);
		printf("The radius of the round table is: %.3lf\n",radius);
		}
	}
}
