#include<stdio.h>
int main()
{
	int test_case,j,i,number[100];
	scanf("%d",&test_case);
	int count=0;
	for(i=0;i<test_case;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<test_case;i++){
		for(j=i;j<test_case;j++){
			if(number[i]<number[j]){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
