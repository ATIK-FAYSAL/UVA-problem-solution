#include<bits/stdc++.h>
using namespace std;
int main()
{
	char input[100000];
	int len,i,count,a,j;
	gets(input);
	len = strlen(input);
		for(i=0;i<len;i+=a){
			j=i;
			while(true){
				if(input[j]>='a'&&input[j]<='z'||input[i]>='A'&&input[i]<='Z'){
					
				}
				else {
					a=i-1;
					count++;
					break;
				}
				j++;
			}
		}
		printf("%d\n",count);
}
