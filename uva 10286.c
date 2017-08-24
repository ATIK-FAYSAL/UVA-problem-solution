#include<stdio.h>
#include<math.h>
int main()
{
	float length,result;
	while(scanf("%f",&length)!=EOF){
		result=length*1.067395681;
		printf("%.10f\n",result);
	}
}
