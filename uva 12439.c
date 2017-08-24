#include<stdio.h>
#include<string.h>
int main()
{
	int value2,value1,check1,check2,check3,check4,RESULT;
	int count,f_year,l_year,f_date,l_date,test_case,j=1,i;
	int count1,count2,count3,result;
	char f_month[50],l_month[50],ch[10],month1[]="February",month2[]="January";
	scanf("%d",&test_case);
		//count=0;
		while(j<=test_case){
			count=0;
		scanf("%s%d%s%d",&f_month,&f_date,&ch,&f_year);
		scanf("%s%d%s%d",&l_month,&l_date,&ch,&l_year);
		check1=strcmp(f_month,month1);
		check2=strcmp(f_month,month2);
		check3=strcmp(l_month,month1);
		check4=strcmp(l_month,month2);
		if(check1!=0&&check2!=0){
			f_year++;
		}
		else if (check3==0||(check4==0&&l_date<29)){
			l_year--;
		}
		count1=(l_year/4)-((f_year-1)/4);
		count2=(l_year/100)-((f_year-1)/100);
		count3=(l_year/400)-((f_year-1)/400);
		result=count1-count2+count2;
		printf("Case %d: %d\n",j,result);
		j++;
	}
	return 0;
}
