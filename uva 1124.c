#include<stdio.h>
int main()
{
	char input[1000];
	while(scanf(" %[^\n]",input)!=EOF){
		printf("%s\n",input);
	}
	return 0;
}
