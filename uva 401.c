#include<stdio.h>
#include<string.h>
int main()
{
	char copy[10000],input[10000];
	int i,len,j,a,b,c;
	while(scanf("%s",input)!=EOF){
		a=0,b=0,c=0;
		len=0;
		int mir=0;
		len=strlen(input);
		j=0;
		int count=0,coutnt1=0;
		for(i=len-1;i>=0;i--){
			copy[j]=input[i];
			j++;
			if(input[i]=='3'||input[i]=='2'||input[i]=='5'||input[i]=='1'||input[i]=='8'){
				mir++;count++;
			}
			else if (input[i]=='A'||input[i]=='H'||input[i]=='I'||input[i]=='L'||input[i]=='J'||input[i]=='M'||input[i]=='O')mir++;
			else if (input[i]=='T'||input[i]=='U'||input[i]=='V'||input[i]=='W'||input[i]=='X'||input[i]=='Y'||input[i]=='Z')mir++;
			else if(input[i]=='S'||input[i]=='Z'||input[i]=='E')mir++;
		}
		copy[j]='\0';
		if(strcmp(copy,input)==0){
			if(mir==len){
				printf("%s -- is a mirrored palindrome.\n",input);
			}
			else {
				printf("%s -- is a regular palindrome.\n",input);
			}
		}
		else if ((len-count)>count){
			printf("%s -- is a mirrored string.\n",input);
		}
		else printf("%s -- is not a palindrome.\n",input);
	}
	return 0;
}
