#include<stdio.h>
#include<string.h>
int main()
{
	char input[100000];
	int i,j=1,len,test_case;
	scanf("%d",&test_case);
	int flag = 0;
	getchar();
	while(j<=test_case){
		while(gets(input)){
			len=strlen(input);
			if(len==0)break;
			for(i=0;i<len;i++){
				if(input[i]=='0'){
					printf("O");
				}
				else if(input[i]=='1'){
					printf("I");
				}
				else if(input[i]=='2'){
					printf("Z");
				}
				else if(input[i]=='3'){
					printf("E");
				}
				else if(input[i]=='4'){
					printf("A");
				}
				else if(input[i]=='5'){
					printf("S");
				}
				else if(input[i]=='6'){
					printf("G");
				}
				else if(input[i]=='7'){
					printf("T");
				}
				else if(input[i]=='8'){
					printf("B");
				}
				else if(input[i]=='9'){
					printf("P");
				}
				else {
					printf("%c",input[i]);
				}
			}
			printf("\n");
		}
		if(j!=test_case)printf("\n");
		j++;
	}
	return 0;
}
