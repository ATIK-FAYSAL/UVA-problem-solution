#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,length;
	char input[1000];
	while(scanf(" %[^\n]",input)!=EOF){
		length=0;
		for(i=0;input[i]!='\0';i++){
			length++;
		}
		for(i=0;i<length;i++){
			if(input[i]=='A'||input[i]=='B'||input[i]=='C'){
				printf("2");
			}
			else if(input[i]=='D'||input[i]=='E'||input[i]=='F'){
				printf("3");
			}
			else if(input[i]=='G'||input[i]=='H'||input[i]=='I'){
				printf("4");
			}
			else if(input[i]=='J'||input[i]=='K'||input[i]=='L'){
				printf("5");
			}
			else if(input[i]=='M'||input[i]=='N'||input[i]=='O'){
				printf("6");
			}
			else if(input[i]=='P'||input[i]=='Q'||input[i]=='R'||input[i]=='S'){
				printf("7");
			}
			else if(input[i]=='W'||input[i]=='X'||input[i]=='Y'||input[i]=='Z'){
				printf("9");
			}
			else if(input[i]=='T'||input[i]=='U'||input[i]=='V'){
				printf("8");
			}
			else {
				printf("%c",input[i]);
			}
		}
		printf("\n");
	} 
}
