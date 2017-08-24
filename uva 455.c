#include<stdio.h>
#include<string.h>
int main()
{
	char input[100000];
	int i,len,arr[26],result;
	for(i=0;i<26;i++){
		arr[i]=0;
	}
	scanf("%s",input);
	len=strlen(input);
	for(i=0;i<len;i++){
		if(input[i]>='A'&&input[i]<='Z')result=input[i]-65;
		else if(input[i]>='a'&&input[i]<='z')result=input[i]-97;
		arr[result]++;
	}
	int count=0;
	for(i=0;i<26;i++){
		if(arr[i]!=0){
			count++;
		}
	}
	if(count==len)printf("%d\n",len);
	else printf("%d\n",len/count);
}
