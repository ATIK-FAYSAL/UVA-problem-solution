#include<stdio.h>
int main()
{
	int tax,test_case,j=1,rang1=180000,rang2=rang1+300000,rang3=rang2+400000,rang4=rang3+300000;
	long long int taka,total;
	double tax1;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%lld",&taka);
		if(taka<=rang1){
			printf("Case %d: 0\n",j);
		}
		else if (rang1<taka&&taka<=rang2){
			total=taka-rang1;
			tax=total*.10;
			tax1=(double)total*.10;
			if(tax<2000){
				printf("Case %d: 2000\n",j,tax);
			}
			else {
				if(tax1>tax){
				printf("Case %d: %d\n",j,tax+1);
				}
				else {
					printf("Case %d: %d\n",j,tax);
				}
			}
		}
		else if (taka>rang2&&taka<=rang3){
			total=taka-rang2;
			tax=total*.15+300000*.1;
			tax1=(double)total*.15+300000*.1;
			if(tax1>tax){
				printf("Case %d: %d\n",j,tax+1);
			}
			else if(tax==tax1){
				printf("Case %d: %d\n",j,tax);
			}
		}
		else if (rang3<taka&&taka<=rang4){
			total=taka-rang3;
			tax=total*.20+300000*.1+400000*.15;
			tax1=(double)total*.20+300000*.1+400000*.15;
			if(tax1>tax){
				printf("Case %d: %d\n",j,tax+1);
			}
			else{
				printf("Case %d: %d\n",j,tax);
			}
		}
		else if (rang4<taka){
			total=taka-rang4;
			tax=total*.25+300000*.1+400000*.15+300000*.20;
			tax1=(double)total*.25+300000*.1+400000*.15+300000*.20;
			if(tax1>tax){
				printf("Case %d: %d\n",j,tax+1);
			}
			else{
				printf("Case %d: %d\n",j,tax);
			}
		}
		
		j++;
	}
	return 0;
}
