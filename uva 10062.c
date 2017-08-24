#include<stdio.h>
#include<string.h>
int main()
{
	char input[100];
	int j,count,i,length;
	while(scanf(" %[^\n]",input)){
		length=strlen(input);
		//count=0;
		for(i=0;i<length;i++){
			count=0;
			for(j=0;j<length;j++){
				if(input[i]==input[j]){
					count++;
				}
			}
			//printf("%d %d\n",input[i],count);
			if()
		}
	}	
}
