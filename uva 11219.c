#include<stdio.h>
int main()
{
	int day1,day2,month1,month2,year1,year2,test_case,j=1,age;
	long long int total_day1,total_day2;
	char ch1,ch2,ch3,ch4;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d%c%d%c%d",&day1,&ch1,&month1,&ch2,&year1);
		scanf("%d%c%d%c%d",&day2,&ch3,&month2,&ch4,&year2);
		total_day1=day1+month1*30+year1*365;
		total_day2=day2+month2*30+year2*365;
		age=(total_day1-total_day2)/365;
		if(total_day1<total_day2){
			printf("Case #%d: Invalid birth date\n",j);
		}
		else if (age>130){
			printf("Case #%d: Check birth date\n",j);
		}
		else if (total_day1==total_day2){
			printf("Case #%d: 0\n",j);
		}
		else {
			printf("Case #%d: %d\n",j,age);
		}
		j++;
	}
	return 0;
}
