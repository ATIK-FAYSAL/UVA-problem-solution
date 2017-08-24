#include<stdio.h>
#include<string.h>
int main()
{
	char input[10000],ch1,ch2;
	int len,i,j,loop,test_case,t=1;
	scanf("%d",&test_case);
	while(t<=test_case){
		scanf(" %[^\n]",input);
		len=strlen(input);
		scanf("%d",&loop);
		for(i=1;i<=loop;i++){
			scanf("%c%c",&ch1,&ch2);
			for(j=0;j<len;j++){
				if(input[j]==ch2){
					printf("%c",ch1);
				}
				else {
					printf("%c",input[j]);
				}
			}
		}
	}
}
