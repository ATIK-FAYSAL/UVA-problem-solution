.#include<stdio.h>
int main()
{
	int length,number,i=1;
	double area,r,t_area,width,y,x,r_area,g_area;
	scanf("%d",&number);
	while(i<=number){
		scanf("%d",&length);
		r=(double)2.00*length/10.00;
		x=(double)6.00*length/10.00;
		t_area=(double)length*x;
		r_area=(double)3.141592654*r*r;
		g_area=(double)t_area-r_area;
		printf("%.2lf %.2lf\n",r_area,g_area);
		i++;
	}
	return 0;
}
