#include<stdio.h>
int main()
{
	int loop,i,a,b,j=0,x=1,k,xx,p,xx1;
	char input[10000];
	while(scanf(" %[^\n]",input)!=EOF){
		scanf("%d",&loop);
		printf("Case %d:\n",x);
		for(i=1;i<=loop;i++){
			scanf("%d%d",&a,&b);
			xx=0,xx1=0;
			for(k=a;k<=b;k++){
				for(p=k+1;p<=b;p++){
				if(input[k]==input[p]){
						xx=0;
					}
				else {
					xx1=1;
					}
				}
			}
			if(xx==0&&xx1!=1){
				printf("Yes\n");
			}
			else if(xx!=0&&xx1==1){
				printf("No\n");
			}
		}
		x++;
	}
	return 0;
}
