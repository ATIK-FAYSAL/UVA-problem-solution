#include<stdio.h>
int main()
{
	int cola,total,last_number,copy;
	while(scanf("%d",&cola)!=EOF){
		copy=cola;
		total=0;
		while(cola!=0){
		//total=0;
		last_number=cola%3;
		total+=cola+last_number;
		cola/=3;
		}
		printf("TOTAL COLA = %d\n",total);
	}
}
