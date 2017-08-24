#include<stdio.h>
int main()
{
	long long int a,b,c;
	int i=1,number;
	scanf("%d",&number);
	while(i<=number){
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a==b&&b==c&&c==a){
			printf("Case %d: Equilateral\n",i);
		}
		else if ((a==b||b==c||c==a)&&(a+b>c&&b+c>a&&c+a>b)){
			printf("Case %d: Isosceles\n",i);
	 }
		else if(a+b>c&&b+c>a&&c+a>b){
			printf("Case %d: Scalene\n",i);
		}
		else {
			printf("Case %d: Invalid\n",i);
		}
		i++;
	}
	return 0;
}
