#include<stdio.h>
#include<string.h>
int main()
{
	int J=1,length,I,number,count;	
	char input[107];
	scanf("%d",&number);
	while(J<=number){
		scanf(" %[^\n]",input);
		length=0;
		count=0;
		length=strlen(input);
		for(I=0;I<=length;I++){
			if(input[I]==' '||input[I]=='a'||input[I]=='d'||input[I]=='g'||input[I]=='j'||input[I]=='m'||input[I]=='p'||input[I]=='t'||input[I]=='w'){
				count=count+1;
			}
			else if(input[I]=='b'||input[I]=='e'||input[I]=='h'||input[I]=='k'||input[I]=='n'||input[I]=='q'||input[I]=='u'||input[I]=='x'){
				count=count+2;
			}
			else if(input[I]=='c'||input[I]=='f'||input[I]=='i'||input[I]=='l'||input[I]=='o'||input[I]=='r'||input[I]=='v'||input[I]=='y'){
				count=count+3;
			}
			else if(input[I]=='s'||input[I]=='z'){
				count=count+4;
			}
		}
		printf("Case #%d: %d\n",J,count);
		J++;
	}
	return 0;
}
