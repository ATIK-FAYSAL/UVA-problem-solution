#include<stdio.h>
int main()
{
	char input[10];
	int i,j,number,length;
	scanf("%d",&number);
	for(i=0;i<number;i++){
		scanf("%s",input);
		length=0;
		for(j=0;input[j]!='\0';j++){
			length++;
		}
			if(length>3){
				printf("3\n");
			}
			else if((input[0]=='t'&&input[1]=='w')||(input[0]=='t'||input[2]=='o')){
				printf("2\n");
			}
			else {
				printf("1\n");
			}	
	}
	return 0;
}
