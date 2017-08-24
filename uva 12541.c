#include<stdio.h>
struct person{
	char name[100];
	int day,month,year;	
  };
int main()
{
	struct person p[100],max,min;
	int i,test_case,j;
	scanf("%d",&test_case);
	for(i=0;i<test_case;i++){
		scanf("%s",p[i].name);
		scanf("%d",&p[i].day);
		scanf("%d",&p[i].month);
		scanf("%d",&p[i].year);
	}
	max=p[0];
	min=p[0];
	for(i=0;i<test_case;i++){
		if(max.year<p[i].year){
			max=p[i];
		}
		else if(min.year>p[i].year){
			min=p[i];
		}
		else {
			if(max.month<p[i].month&&max.year<=p[i].year){
				max=p[i];
			}
			else if(min.month>p[i].month&&min.year>=p[i].year){
				min=p[i];
			}
			else {
			if(max.day<p[i].day&&max.month<=p[i].month&&p[i].year>=max.year){
				max=p[i];
			}
			else if(min.day>p[i].day&&min.month>=p[i].month&&p[i].year<=min.year){
				min=p[i];
				}
			}
		}
	}
	printf("%s\n%s\n",max.name,min.name);
	return 0;
}
