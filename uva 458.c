#include<stdio.h>
#include<string.h>
int main()
{
	char input[100],copy[1000];
	int i=0,count=0,x,len;
	while(scanf(" %[^\n]",input)!=EOF){
		x=0;
		len=strlen(input);
		for(i=0;i<len;i++){
			copy[x]=input[i]-7;
			x++;
		}
		for(x=0;x<len;x++){
			printf("%c",copy[x]);
			if(x==len-1){
				printf("\n");
			}
		}
	}
	return 0;
}
