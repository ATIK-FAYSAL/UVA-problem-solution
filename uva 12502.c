#include<stdio.h>
int main()
{
	float A,B,C,D;
	int number,j=1;
	scanf("%d",&number);
	while(j<=number){
		scanf("%f%f%f",&A,&B,&C);
		D=C/(A+B);
		A=(A*D)+(A-B)*D;
		printf("%.0f\n",A);
		j++;
	}
	return 0;
}
