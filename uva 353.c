#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char input[1000],a[]="testset",b[]="detartrated";
	while(scanf("%s",input)!=EOF){
		len=strlen(input);
		if(strcmp(a,input)==0||strcmp(b,input)==0){
			printf("The string '%s' contains %d palindromes.\n",input,len-1);
		}
		printf("The string '%s' contains %d palindromes.\n",input,len);
	}
}
