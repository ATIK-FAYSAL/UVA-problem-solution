#include<stdio.h>
#include<math.h>
int main()
{
	float a,s,v,t,u,result1,result2;
	int i=0,number,j=1;
	while(i<1){
		scanf("%d",&number);
		if(number==0){
			break;
		}
		else if (number==1){
			scanf("%f%f%f",&u,&v,&t);
			result1=(v-u)/t;
			result2=(v*v-u*u)/(2*result1);
			printf("Case %d: %.3f %.3f\n",j,result2,result1);
		}
		else if (number==2){
			scanf("%f%f%f",&u,&v,&a);
			result1=(v*v-u*u)/(2*a);
			result2=(v-u)/a;
			printf("Case %d: %.3f %.3f\n",j,result1,result2);
		}
		else if (number==3){
			scanf("%f%f%f",&u,&a,&s);
			v=(u*u)+(2*a*s);
			result1=sqrt(v);
			result2=(result1-u)/a;
			printf("Case %d: %.3f %.3f\n",j,result1,result2);
		}
		else if(number==4){
			scanf("%f%f%f",&v,&a,&s);
			u=v*v-(2*a*s);
			result1=sqrt(u);
			result2=(v-result1)/a;
			printf("Case %d: %.3f %.3f\n",j,result1,result2);
		}
		j++;
	}
	return 0;
}
