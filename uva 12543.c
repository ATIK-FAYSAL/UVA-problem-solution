#include<stdio.h>
#include<string.h>
int main()
{
	int j=0,len,max=0,i;
	char input[1000],copy[1000];
	while(j<1){
		scanf("%s",input);
		if(input[0]=='E'&&input[1]=='-'&&input[2]=='N'&&input[3]=='-'&&input[4]=='D'){
			break;
		}
		len=strlen(input);
		for(i=0;i<len;i++){
			if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z')&&(input[i]=='-')){
				if(len>max){
					max=len;
					strcpy(copy,input);
				}
			}
		}	
	}
	strlwr(copy);
	printf("%s\n",copy);
	return 0;
}
