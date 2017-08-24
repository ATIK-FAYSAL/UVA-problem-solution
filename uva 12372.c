#include<stdio.h>
int main()
{
	int L,W,H,number,i=1;
	scanf("%d",&number);
	while(i<=number){
		scanf("%d%d%d",&L,&W,&H);
		if(L<=20&&W<=20&&H<=20){
			printf("Case %d: good\n",i);
		}
		else {
			printf("Case %d: bad\n",i);
		}
		i++;
	}
	return 0;
}
