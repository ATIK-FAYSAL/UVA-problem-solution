#include<stdio.h>
#include<string.h>
int main()
{
	char input1[1000],input2[1000];
	int count,i,j,length1,length2;
	gets(input1);
	gets(input2);
	length1=strlen(input1);
	length2=strlen(input2);
	count=0;
	int max=0;
	for(i=0;i<length1;i++){
		//count=0;
		for(p=i+1;)
		for(j=0;j<length2;j++){
			if(input1[i]==input2[j]){
				count++;
			}	
		}
	}
	printf("COUNT = %d\n",count);
}
