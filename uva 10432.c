#include <stdio.h>
#include <math.h>
int main ()
{
	int b;
   	double PI=3.1415926535897932384626433832795,radius,number;
   	double a,result,angle,ret;
   	while(scanf("%lf%lf",&radius,&number)!=EOF){
	   		result=radius*radius*number/2*sin(2.00*PI/number);
   			printf("%.3lf\n",result);
	   }
   return 0;
}
