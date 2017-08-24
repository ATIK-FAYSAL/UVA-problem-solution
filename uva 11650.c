#include<stdio.h>
int main()
{
	int hour,minite,i=1,loop,hour1,minite1;
	char ch=':';
	scanf("%d",&loop);
	while(i<=loop){
		scanf("%d%c%d",&hour,&ch,&minite);
		if(minite==0){
			if(hour==1||hour==2){
				printf("%d:0%d\n",12-hour,minite);
			}
			else if(hour==12){
				printf("%d:0%d\n",hour,minite);
			}
			else {
				printf("0%d:0%d\n",12-hour,minite);
			}
		}
		else {
			if((hour==2||hour==3||hour==4||hour==5||hour==6||hour==7||hour==8||hour==9||hour==10)&&minite<=50){
				printf("0%d:%d\n",12-(hour+1),60-minite);
			}
			else if(hour==2||hour==3||hour==4||hour==5||hour==6||hour==7||hour==8||hour==9||hour==10&&minite>=51&&minite<=60){
				printf("0%d:0%d\n",12-(hour+1),60-minite);
			}
			else if(hour==1&&minite<=50){
				printf("%d:%d\n",12-(hour+1),60-minite);
			}
			else if(hour==1&&minite>=50){
				printf("%d:0%d\n",12-(hour+1),60-minite);
			}
			else if(hour==11&&minite<=50){
				printf("%d:%d\n",24-(hour+1),60-minite);
			}
			else if(hour==12&&minite<=50){
				printf("%d:%d\n",24-(hour+1),60-minite);
			}
			else if(hour==11&&minite>=50&&minite<=59){
				printf("%d:0%d\n",24-(hour+1),60-minite);
			}
			else if(hour==12&&minite>=50&&minite<=59){
				printf("%d:0%d\n",24-(hour+1),60-minite);
			}
		}
		i++;
	}
	return 0;
}
