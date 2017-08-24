#include<stdio.h>
int main()
{
	int L,W,H,max_v=0,i,number,volume,volume1,x=0;
	int g=9,max_f,y,z=0,f;
	while(x<1){
		z=0;
		y=0;
	max_f=0,max_v=0,volume=1;
	scanf("%d",&number);
	if(number==0){
		break;
	}
	for(i=1;i<=number;i++){
		scanf("%d%d%d",&L,&W,&H);
		f=g-(g/2*H);
		volume1=L*W*H;
		if(max_f<f){
			max_f=f;
		}
			if (max_v<volume1){
				max_v=volume1;
			}
			if(y==f){
				z=1;
			}
			y=f;
		}
		if(z==1){
			printf("%d\n",max_v);
		}
		else {
			printf("%d\n",max_f);
		}
	}
	return 0;
}
