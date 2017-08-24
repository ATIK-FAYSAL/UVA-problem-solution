#include<stdio.h>
int main()
{
	char input;
	int j=0,length,i,x;
	while(scanf("%c",&input)!=EOF){
			if(input=='B'){
				printf("V");
			}
			else if (input=='C'){
				printf("X");
			}
			else if (input=='D'){
				printf("S");
			}
			else if (input=='E'){
				printf("W");
			}
			else if (input=='F'){
				printf("D");
			}
			else if (input=='G'){
				printf("F");
			}
			else if (input=='H'){
				printf("G");
			}
			else if (input=='I'){
				printf("U");
			}
			else if (input=='J'){
				printf("H");
			}
			else if (input=='K'){
				printf("J");
			}
			else if (input=='L'){
				printf("K");
			}
			else if (input=='M'){
				printf("N");
			}
			else if (input=='N'){
				printf("B");
			}
			else if (input=='O'){
				printf("I");
			}
			else if (input=='P'){
				printf("O");
			}
			else if (input=='R'){
				printf("E");
			}
			else if (input=='S'){
				printf("A");
			}
			else if (input=='T'){
				printf("R");
			}
			else if (input=='U'){
				printf("Y");
			}
			else if (input=='V'){
				printf("C");
			}
			else if (input=='W'){
				printf("Q");
			}
			else if (input=='X'){
				printf("Z");
			}
			else if (input=='Y'){
				printf("T");;
			}
			else if(input=='[')
			{
				printf("P");
			}
			else if(input==';')
			{
				printf("L");
			}
			else if(input==',')
			{
				printf("M");
			}
			else if(input==39)
			{
				printf(";");
			}
			else if(input=='.')
			{
				printf(",");
			}
			else if(input=='/')
			{
				printf(".");
			}
			else if (input==92){
				printf("]");
			}
			else  if(input==']'){
				printf("[");
			}
			else if(input=='-')
			{
				printf("0");
			}
			else if(input=='=')
			{
				printf("-");
			}
			else if(input=='1')
			{
				printf("`");
			}
			else if(input=='2')
			{
				printf("1");
			}
			else if(input=='3')
			{
				printf("2");
			}
			else if(input=='4')
			{
				printf("3");
			}
			else if(input=='5')
			{
				printf("4");
			}
			else if(input=='6')
			{
				printf("5");
			}
			else if(input=='7')
			{
				printf("6");
			}
			else if(input=='8')
			{
				printf("7");
			}
			else if(input=='9')
			{
				printf("8");
			}
			else if (input=='0'){
				printf("9");
			}
			else if(input==' '){
				printf(" ");
			}
			else if (input=='\n'){
				printf("\n");
			}
		}
return 0;	
}
