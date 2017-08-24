#include<stdio.h>
int main()
{
	int i=0,a,b,c;
	while(i<1){
		scanf("%d%d%d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			break;
		}
		if(a>b&&a>c){
				if(c*c+b*b==a*a){
			printf("right\n");
		}
		else {
			printf("wrong\n");
			}
		}
			else if(b>c&&b>a){
				if(c*c+a*a==b*b){
			printf("right\n");
		}
		else {
			printf("wrong\n");
			}
		}
			else if(c>b&&c>a){
				if(a*a+b*b==c*c){
			printf("right\n");
		}
		else {
			printf("wrong\n");
			}
		}
		else {
			if(a*a+b*b==c*c){
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}
	}	
	return 0;
}
