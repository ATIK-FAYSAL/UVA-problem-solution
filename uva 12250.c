#include<stdio.h>
#include<string.h>
int main()
{
	char input[100];
	char country1[]="HELLO",country2[]="HOLA",country3[]="HALLO",country4[]="BONJOUR",country5[]="CIAO",country6[]="ZDRAVSTVUJTE";
	int i=0,check1,check2,check3,check4,check5,check6,x=1;
	while(i<1){
		scanf("%s",input);
		if(input[0]=='#'){
			break;
		}
		check1=strcmp(input,country1);
		check2=strcmp(input,country2);
		check3=strcmp(input,country3);
		check4=strcmp(input,country4);
		check5=strcmp(input,country5);
		check6=strcmp(input,country6);
		if(check1==0){
			printf("Case %d: ENGLISH\n",x);
		}
		else if(check2==0){
			printf("Case %d: SPANISH\n",x);
		}
		else if (check3==0){
			printf("Case %d: GERMAN\n",x);
		}
		else if (check4==0){
			printf("Case %d: FRENCH\n",x);
		}
		else if(check5==0){
			printf("Case %d: ITALIAN\n",x);
		}
		else if (check6==0){
			printf("Case %d: RUSSIAN\n",x);
		}
		else {
			printf("Case %d: UNKNOWN\n",x);
		}
		x++;
	}
	return 0;
}
