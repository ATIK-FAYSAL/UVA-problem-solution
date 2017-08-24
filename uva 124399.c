#include<stdio.h>
#include<string.h>
int main()
{
	int value2,value1,check1,check2,check3,check4,RESULT;
	int count,f_year,l_year,f_date,l_date,test_case,j=1,i;
	char f_month[50],l_month[50],ch[10],month1[]="February",month2[]="January";
	scanf("%d",&test_case);
		while(j<=test_case){
			count=0;
		scanf("%s%d%s%d",&f_month,&f_date,&ch,&f_year);
		scanf("%s%d%s%d",&l_month,&l_date,&ch,&l_year);
		check1=strcmp(f_month,month1);
		check2=strcmp(f_month,month2);
		check3=strcmp(l_month,month1);
		check4=strcmp(l_month,month2);
		if(check1==0){
			value1=2;
		}
		else if(check2==0){
			value1=1;
		}
		else {
			value1=3;
		}
		if(check3==0){
			value2=2;
		}
		else if (check4==0){
			value2=1;
		}
		else {
			value2=3;
		}
		for(i=f_year;i<=l_year;i++){
			if(i%4==0&&i%100!=0||i%400==0){
				count++;
			}
		}
		if((value1<=2&&value2>2)||(value2==2&&l_date==29)){
			printf("Case %d: %d\n",j,count);
		}
		else if (value1>2&&value2>2&&count==0){
			printf("Case %d: %d\n",j,count);
		}
		else {
			printf("Case %d: %d\n",j,count-1);
		}
		j++;
	}
	return 0;
}
