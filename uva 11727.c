#include<stdio.h>
int main()
{
	int max,min,a,b,c,i=1,number;
	scanf("%d",&number);
	while(i<=number){
	scanf("%d%d%d",&a,&b,&c);
		if(a>b&&a>c){
			max=a;
		}
		else if (b>c&&b>a){
			max=b;
		}
		else if (c>a&&c>b) {
			max=c;
		}
		if (a<c&&a<b){
			min=a;
		}
		else if (b<a&&b<c){
			min=b;
		}
		else if (c<a&&c<b){
			min=c;
		}
		if(max==b&&min==c||max==c&&min==b){
			printf("Case %d: %d\n",i,a);
		}
		else if (max==a&&min==c||max==c&&min==a){
			printf("Case %d: %d\n",i,b);
		}
		else if (max==a&&min==b||max==b&&min==a){
			printf("Case %d: %d\n",i,c);
		}
		else if (a==b==c){
			printf("Case %d: %d\n",i,a);
		}
		else if (a==b){
			printf("Case %d: %d\n",i,a);
		}
		else if (b==c){
			printf("Case %d: %d\n",i,b);
		}
		else if (c==a){
			printf("Case %d: %d\n",i,c);
		}
		i++;
	}
	return 0;
}
