#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,score,test_case,i,j=1,length;
	char input[100];
	scanf("%d",&test_case);
	while(j<=test_case){
		score=0;
		count=0;
		scanf("%s",input);
		length=strlen(input);
		for(i=0;i<length;i++){
			if(input[i]=='X'){
				count=0;
			}
			else {
				count++;
				score+=count;
			}
		}
		printf("%d\n",score);
		j++;
	}
	return 0;
}
