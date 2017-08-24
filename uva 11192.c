#include<stdio.h>
int main()
{
	int i,length,j=0,number,y,z;
	char input1[100],input[100];
		length= 0;
		int x=0;
		scanf("%d%s",&number,input);
		for(i=0;input[i]!='\0';i++){
			length++;
		}
		z=length/number;
		for(y=z;y<length;y+=z){
		for(i=y-1;i>=0;i--){
			input1[x]=input[i];
			x++;
			}
			
		}
			printf("%s\n",input1);
	
	
}
