#include<stdio.h>
int main()
{
	int i=0,j=1;
	char input[1000];
	while(i<1){
		scanf(" %[^\n]",input);
		if(input[0]=='*'){
			break;
		}
		else if(input[0]=='H'&&input[1]=='a'&&input[2]=='j'&&input[3]=='j'){
			printf("Case %d: Hajj-e-Akbar\n",j);
		}
		else if(input[0]=='U'&&input[1]=='m'&&input[2]=='r'&&input[3]=='a'&&input[4]=='h'){
			printf("Case %d: Hajj-e-Asghar\n",j);
		}
		j++;
	}
	return 0;
}
