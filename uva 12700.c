#include<stdio.h>
#include<string.h>
int main()
{
	int match,count,loop,i,j=1,length,b,w,a,t,bangladesh,www,draw;
	char input[100];
	scanf("%d",&loop);
	while(j<=loop){
		a=0,b=0,t=0,w=0;
		scanf("%d",&match);
		scanf(" %[^\n]",input);
		length=strlen(input);
		for(i=0;i<length;i++){
			if(input[i]=='B'){
				b++;
			}
			else if (input[i]=='W'){
				w++;
			}
			else if(input[i]=='A'){
				a++;
			}
			else if(input[i]=='T'){
				t++;
			}
		}
		if (a==match){
			printf("Case %d: ABANDONED\n",j);
		}
		else if(b==match-a){
			printf("Case %d: BANGLAWASH\n",j);
		}
		else if (w==match-a){
			printf("Case %d: WHITEWASH\n",j);
		}
		else if (b>w&&b!=match){
			printf("Case %d: BANGLADESH %d - %d\n",j,b,w);
		}
		else if (w>b&&w!=match){
			printf("Case %d: WWW %d - %d\n",j,w,b);
		}
		else if (b==w&&t>=0||a!=0){
			printf("Case %d: DRAW %d %d\n",j,b,t);
		}
		j++;
	}
	return 0;
}
