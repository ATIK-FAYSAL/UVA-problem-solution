#include<stdio.h>
int main()
{
	int s_hour,s_minit,loop,s_time,e_hour,e_minit,i,j=1,minit,test_case,e_time,min;
	int def,l_time,x_time;
	char ch,ch1;
	scanf("%d",&test_case);
	while(j<=test_case){
		scanf("%d%d%c%d",&loop,&s_hour,&ch,&s_minit);
		s_time=s_hour*60+s_minit;
		scanf("%d%c%d%d",&e_hour,&ch1,&e_minit,&minit);
		e_time=e_hour*60+e_minit;
		if(e_time<s_time){
			l_time=(24*60+e_time);
			def=(l_time-s_time)+minit;
		}
		else {
			def=(e_time-s_time)+minit;	
		}
		min=def;
		for(i=1;i<loop;i++){
			scanf("%d%c%d%d",&e_hour,&ch1,&e_minit,&minit);
			e_time=e_hour*60+e_minit;
			if(e_time<s_time){
				l_time=(24*60+e_time);
				def=(l_time-s_time)+minit;
			}
			else {
				def=(e_time-s_time)+minit;
			}
			if(min>def){
				min=def;
			}
		}
		printf("Case %d: %d\n",j,min);
		j++;
	}
	return 0;
}
