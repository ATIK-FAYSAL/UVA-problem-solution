#include<stdio.h>
int main()
{
	int c,f,number,i;
	float C_t_F,result,F_t_C,C,F;
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		scanf("%d%d",&c,&f);
		C=(float)c;
		F=(float)f;
		C_t_F=((C*9/5)+32);
		result=C_t_F+F;
		F_t_C=5*(result-32)/9;
		printf("Case %d: %.2f\n",i,F_t_C);
	}
	return 0;
}
