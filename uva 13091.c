#include<stdio.h>
#include<string.h>
int main()
{
	char input[10];
	int test_case,length,i,j=1,k,A,B,C;
	scanf("%d",&test_case);
	while(j<=test_case){
		A=0,B=0,C=0;
		for(i=1;i<=5;i++){
			scanf(" %[^\n]",input);
			length=strlen(input);
			for(k=0;k<length;k++){
				if(input[k]=='|'){
					A=k+1;
				}
				else if(input[k]=='>'){
					B=k+1;
					break;
				}
				else if(input[k]=='<'){
					C=k+1;
					break;
				}
			}
		}
		if((B==0&&C>A)||(C==0&&B<A)){
			printf("Case %d: Thik Ball\n",j);
		}
		else if ((B==0&&A>C)||(C==0&&B>A)){
			printf("Case %d: No Ball\n",j);
		}
		j++;
	}
	return 0;
}
