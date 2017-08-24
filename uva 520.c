#include<stdio.h>
#include<string.h>
int main()
{
	char input[1000];
	int len,i,j,cou=0,number[1000],x=0;
	
	scanf(" %[^\t]",input);
	len = strlen(input);
	for(i=0;i<len;i++){
		if(input[i]=='"'){
			number[x]=i;
			x++;cou++;
		}
	}
	for(x=0;x<cou;x++){
		printf("%d  ",number[x]);
	}
	printf("%d\n",len);
}
